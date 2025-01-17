/*
 * File: z_en_ge1.c
 * Overlay: ovl_En_Ge1
 * Description: White-clothed Gerudo
 * Triforce% Gerudo Mask Magic courtesy of z64me <z64.me>
 */

#include "ootmain.h"
#include "z_en_ge1.h"

#define FLAGS 0x00000009

/* enable this if you want the Triforce% fence to remain lowered
 * once Link has left and re-entered the scene
 */
//#define MASK_FENCE_PERSISTENT

/* Triforce% Gerudo Mask functionality */
#define MASK_FENCE_TIME 30
#ifdef MASK_FENCE_PERSISTENT
	/* for keeping track of whether Link used Gerudo Mask to open fence */
	/* TODO please ensure this does not conflict with other flags */
	#define FLAG_FENCE_MASK (1 << 3)
	#define TRIFORCE_FENCE_GET Flags_GetTreasure(globalCtx, FLAG_FENCE_MASK)
	#define TRIFORCE_FENCE_SET Flags_SetTreasure(globalCtx, FLAG_FENCE_MASK)
#else
	#define TRIFORCE_FENCE_GET (this->fenceLowered)
	#define TRIFORCE_FENCE_SET this->fenceLowered = 1
#endif

#define THIS ((EnGe1*)thisx)

#define GE1_STATE_TALKING (1 << 0)
#define GE1_STATE_GIVE_QUIVER (1 << 1)
#define GE1_STATE_IDLE_ANIM (1 << 2)
#define GE1_STATE_STOP_FIDGET (1 << 3)

typedef enum {
	/* 00 */ GE1_HAIR_BOB,
	/* 01 */ GE1_HAIR_STRAIGHT,
	/* 02 */ GE1_HAIR_SPIKY
} EnGe1Hairstyle;

/* extras */
static void EnGe1_WaitTillOpened_Mask(EnGe1* this, GlobalContext* globalCtx);
static void EnGe1_Open_Mask(EnGe1* this, GlobalContext* globalCtx);
static void EnGe1_SetupOpen_Mask(EnGe1* this, GlobalContext* globalCtx);
static float BounceEaseOut(float p);
static void TriforceFence(Actor* thisx, GlobalContext* globalCtx);

static void EnGe1_Init(Actor* thisx, GlobalContext* globalCtx);
static void EnGe1_Destroy(Actor* thisx, GlobalContext* globalCtx);
static void EnGe1_Update(Actor* thisx, GlobalContext* globalCtx);
static void EnGe1_Draw(Actor* thisx, GlobalContext* globalCtx);

static s32 EnGe1_CheckCarpentersFreed(void);
static void EnGe1_WatchForPlayerFrontOnly(EnGe1* this, GlobalContext* globalCtx);
static void EnGe1_SetNormalText(EnGe1* this, GlobalContext* globalCtx);
static void EnGe1_WatchForAndSensePlayer(EnGe1* this, GlobalContext* globalCtx);
static void EnGe1_GetReaction_ValleyFloor(EnGe1* this, GlobalContext* globalCtx);
static void EnGe1_CheckForCard_GTGGuard(EnGe1* this, GlobalContext* globalCtx);
static void EnGe1_CheckGate_GateOp(EnGe1* this, GlobalContext* globalCtx);
static void EnGe1_GetReaction_GateGuard(EnGe1* this, GlobalContext* globalCtx);
static void EnGe1_TalkAfterGame_Archery(EnGe1* this, GlobalContext* globalCtx);
static void EnGe1_Wait_Archery(EnGe1* this, GlobalContext* globalCtx);
static void EnGe1_CueUpAnimation(EnGe1* this);
static void EnGe1_StopFidget(EnGe1* this);

const ActorInitExplPad init_vars = {
	.id = 0xDEAD, .padding = 0xBEEF, // <-- magic values, do not change
	.category = ACTORCAT_NPC,
	.flags = FLAGS,
	.objectId = OBJECT_GE1,
	.instanceSize = sizeof(EnGe1),
	.init = (ActorFunc)EnGe1_Init,
	.destroy = (ActorFunc)EnGe1_Destroy,
	.update = (ActorFunc)EnGe1_Update,
	.draw = (ActorFunc)EnGe1_Draw
};

static ColliderCylinderInit sCylinderInit = {
	{
		COLTYPE_NONE,
		AT_NONE,
		AC_ON | AC_TYPE_ENEMY,
		OC1_ON | OC1_TYPE_ALL,
		OC2_TYPE_1,
		COLSHAPE_CYLINDER,
	},
	{
		ELEMTYPE_UNK0,
		{ 0x00000000, 0x00, 0x00 },
		{ 0x00000702, 0x00, 0x00 },
		TOUCH_NONE,
		BUMP_ON,
		OCELEM_ON,
	},
	{ 20, 40, 0, { 0, 0, 0 } }
};

static Vec3f D_80A327A8 = { 600.0f, 700.0f, 0.0f };

static void EnGe1_Init(Actor* thisx, GlobalContext* globalCtx) {
	EnGe1* this = THIS;

	ActorShape_Init(&this->actor.shape, 0.0f, ActorShadow_DrawCircle, 30.0f);
	SkelAnime_InitFlex(globalCtx, &this->skelAnime, &gGerudoWhiteSkel, &gGerudoWhiteIdleAnim, this->jointTable,
					   this->morphTable, GE1_LIMB_MAX);
	Animation_PlayOnce(&this->skelAnime, &gGerudoWhiteIdleAnim);
	Collider_InitCylinder(globalCtx, &this->collider);
	Collider_SetCylinder(globalCtx, &this->collider, &this->actor, &sCylinderInit);
	this->actor.colChkInfo.mass = MASS_IMMOVABLE;
	this->animation = &gGerudoWhiteIdleAnim;
	this->animFunc = EnGe1_CueUpAnimation;
	this->actor.targetMode = 6;
	Actor_SetScale(&this->actor, 0.01f);

	// In Gerudo Valley
	this->actor.uncullZoneForward = ((globalCtx->sceneNum == SCENE_SPOT09) ? 1000.0f : 1200.0f);

	switch (this->actor.params & 0xFF) {

		case GE1_TYPE_GATE_GUARD:
			this->hairstyle = GE1_HAIR_SPIKY;
			this->actionFunc = EnGe1_GetReaction_GateGuard;
			
			/* Triforce% persistent Gerudo Mask functionality */
			if (TRIFORCE_FENCE_GET)
				this->actionFunc = EnGe1_SetNormalText;
			
			break;

		case GE1_TYPE_GATE_OPERATOR:
			this->hairstyle = GE1_HAIR_STRAIGHT;

			if (EnGe1_CheckCarpentersFreed()) {
				this->actionFunc = EnGe1_CheckGate_GateOp;
			} else {
				this->actionFunc = EnGe1_WatchForPlayerFrontOnly;
			}
			break;

		case GE1_TYPE_NORMAL:
			this->hairstyle = GE1_HAIR_STRAIGHT;

			if (EnGe1_CheckCarpentersFreed()) {
				this->actionFunc = EnGe1_SetNormalText;
			} else {
				this->actionFunc = EnGe1_WatchForAndSensePlayer;
			}
			break;

		case GE1_TYPE_VALLEY_FLOOR:
			if (LINK_IS_ADULT) {
				// Valley floor Gerudo withdrawal
				//osSyncPrintf(VT_FGCOL(CYAN) "谷底 ゲルド 撤退 \n" VT_RST);
				Actor_Kill(&this->actor);
				return;
			}
			this->hairstyle = GE1_HAIR_BOB;
			this->actionFunc = EnGe1_GetReaction_ValleyFloor;
			break;

		case GE1_TYPE_HORSEBACK_ARCHERY:
			if (INV_CONTENT(SLOT_BOW) == ITEM_NONE) {
				Actor_Kill(&this->actor);
				return;
			}
			this->actor.targetMode = 3;
			this->hairstyle = GE1_HAIR_BOB;
			// Horsback archery Gerudo EVENT_INF(0) =
			//osSyncPrintf(VT_FGCOL(CYAN) "やぶさめ ゲルド EVENT_INF(0) = %x\n" VT_RST, gSaveContext.eventInf[0]);

			if (gSaveContext.eventInf[0] & 0x100) {
				this->actionFunc = EnGe1_TalkAfterGame_Archery;
			} else if (EnGe1_CheckCarpentersFreed()) {
				this->actionFunc = EnGe1_Wait_Archery;
			} else {
				this->actionFunc = EnGe1_WatchForPlayerFrontOnly;
			}
			break;

		case GE1_TYPE_TRAINING_GROUNDS_GUARD:
			this->hairstyle = GE1_HAIR_STRAIGHT;

			if (EnGe1_CheckCarpentersFreed()) {
				this->actionFunc = EnGe1_CheckForCard_GTGGuard;
			} else {
				this->actionFunc = EnGe1_WatchForPlayerFrontOnly;
			}
			break;
	}

	this->stateFlags = 0;
}

static void EnGe1_Destroy(Actor* thisx, GlobalContext* globalCtx) {
	EnGe1* this = THIS;

	Collider_DestroyCylinder(globalCtx, &this->collider);
}

static s32 EnGe1_SetTalkAction(EnGe1* this, GlobalContext* globalCtx, u16 textId, f32 arg3, EnGe1ActionFunc actionFunc) {
	if (func_8002F194(&this->actor, globalCtx)) {
		this->actionFunc = actionFunc;
		this->animFunc = EnGe1_StopFidget;
		this->stateFlags &= ~GE1_STATE_IDLE_ANIM;
		this->animation = &gGerudoWhiteIdleAnim;
		Animation_Change(&this->skelAnime, &gGerudoWhiteIdleAnim, 1.0f, 0.0f,
						 Animation_GetLastFrame(&gGerudoWhiteIdleAnim), ANIMMODE_ONCE, -8.0f);
		return true;
	}

	this->actor.textId = textId;

	if (this->actor.xzDistToPlayer < arg3) {
		func_8002F2CC(&this->actor, globalCtx, arg3);
	}

	return false;
}

static void EnGe1_SetAnimationIdle(EnGe1* this) {
	Animation_Change(&this->skelAnime, &gGerudoWhiteIdleAnim, -1.0f, Animation_GetLastFrame(&gGerudoWhiteIdleAnim),
					 0.0f, ANIMMODE_ONCE, 8.0f);
	this->animation = &gGerudoWhiteIdleAnim;
	this->animFunc = EnGe1_CueUpAnimation;
}

s32 EnGe1_CheckCarpentersFreed(void) {
	u16 carpenterFlags = gSaveContext.eventChkInf[9];

	if (!((carpenterFlags & 1) && (carpenterFlags & 2) && (carpenterFlags & 4) && (carpenterFlags & 8))) {
		return 0;
	}
	return 1;
}

/**
 * Sends player to different places depending on if has hookshot, and if this is the first time captured
 */
static void EnGe1_KickPlayer(EnGe1* this, GlobalContext* globalCtx) {
	this->stateFlags |= GE1_STATE_TALKING;

	if (this->cutsceneTimer > 0) {
		this->cutsceneTimer--;
	} else {
		func_8006D074(globalCtx);

		if ((INV_CONTENT(ITEM_HOOKSHOT) == ITEM_NONE) || (INV_CONTENT(ITEM_LONGSHOT) == ITEM_NONE)) {
			globalCtx->nextEntranceIndex = 0x1A5;
		} else if (gSaveContext.eventChkInf[12] & 0x80) { // Caught previously
			globalCtx->nextEntranceIndex = 0x5F8;
		} else {
			globalCtx->nextEntranceIndex = 0x3B4;
		}

		globalCtx->fadeTransition = 0x26;
		globalCtx->sceneLoadFlag = 0x14;
	}
}

static void EnGe1_SpotPlayer(EnGe1* this, GlobalContext* globalCtx) {
	this->cutsceneTimer = 30;
	this->actionFunc = EnGe1_KickPlayer;
	func_8002DF54(globalCtx, &this->actor, 0x5F);
	func_80078884(NA_SE_SY_FOUND);
	func_8010B680(globalCtx, 0x6000, &this->actor);
}

static void EnGe1_WatchForPlayerFrontOnly(EnGe1* this, GlobalContext* globalCtx) {
	s16 angleDiff = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;

	if ((ABS(angleDiff) <= 0x4300) && (this->actor.xzDistToPlayer < 100.0f)) {
		EnGe1_SpotPlayer(this, globalCtx);
	}

	if (this->collider.base.acFlags & AC_HIT) {
		EnGe1_SpotPlayer(this, globalCtx);
	}

	CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, &this->collider.base);
}

static void EnGe1_ChooseActionFromTextId(EnGe1* this, GlobalContext* globalCtx) {
	this->stateFlags |= GE1_STATE_TALKING;

	if (func_8002F334(&this->actor, globalCtx)) {
		switch (this->actor.textId) {
			case 0x6001:
				this->actionFunc = EnGe1_SetNormalText;
				break;

			case 0x601A:
			case 0x6019:
				this->actionFunc = EnGe1_GetReaction_ValleyFloor;
				break;

			case 0x6018:
				this->actionFunc = EnGe1_CheckGate_GateOp;
				break;

			default:
				this->actionFunc = EnGe1_GetReaction_ValleyFloor;
				break;
		}
	}
}

static void EnGe1_SetNormalText(EnGe1* this, GlobalContext* globalCtx) {
	u16 text = 0x6001;
	/* Triforce% spaghetti: talking to Triforce fence Gerudo without
	 * Gerudo Mask after opening it
	 */
	if (!WearingWorkingGerudoMask() && this->fence && TRIFORCE_FENCE_GET)
		text = 0x6069; //"...A kid like you has no business there."
	EnGe1_SetTalkAction(this, globalCtx, text, 100.0f, EnGe1_ChooseActionFromTextId);
}

static void EnGe1_WatchForAndSensePlayer(EnGe1* this, GlobalContext* globalCtx) {
	s16 angleDiff = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;

	if ((this->actor.xzDistToPlayer < 50.0f) || ((ABS(angleDiff) <= 0x4300) && (this->actor.xzDistToPlayer < 400.0f))) {
		EnGe1_SpotPlayer(this, globalCtx);
	}

	if (this->collider.base.acFlags & AC_HIT) {
		EnGe1_SpotPlayer(this, globalCtx);
	}
	CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, &this->collider.base);
}

static void EnGe1_GetReaction_ValleyFloor(EnGe1* this, GlobalContext* globalCtx) {
	u16 reactionText = Text_GetFaceReaction(globalCtx, 0x22);

	if (reactionText == 0) {
		reactionText = 0x6019; //"Why did you come all the way down here?..."
	}
	
	if ((this->actor.params & 0xFF) == GE1_TYPE_GATE_GUARD)
	{
		/* Triforce% spaghetti: talking to Triforce fence Gerudo without
		 * Gerudo Mask after opening it
		 */
		if (!WearingWorkingGerudoMask())
			reactionText = 0x6069; //"...A kid like you has no business there."
		
		/* Triforce% special reaction text: reroute "You've got guts coming
		around here wearing that!" to "Hey, newcomer! I'll open the gate!"
		 */
		if (reactionText == 0x719f)
		{
			if (TRIFORCE_FENCE_GET)
				reactionText = 0x6001; //"Hey, newcomer!"
			else
				reactionText = 0x6002; //"Hey, newcomer! Wait a second and I'll open the gate for you."
		}
	}

	EnGe1_SetTalkAction(this, globalCtx, reactionText, 100.0f, EnGe1_ChooseActionFromTextId);
}

// Gerudo Training Ground Guard functions

static void EnGe1_WaitTillOpened_GTGGuard(EnGe1* this, GlobalContext* globalCtx) {
	if (this->cutsceneTimer > 0) {
		this->cutsceneTimer--;
	} else {
		EnGe1_SetAnimationIdle(this);
		this->actionFunc = EnGe1_SetNormalText;
	}

	this->stateFlags |= GE1_STATE_STOP_FIDGET;
}

static void EnGe1_Open_GTGGuard(EnGe1* this, GlobalContext* globalCtx) {
	if (this->stateFlags & GE1_STATE_IDLE_ANIM) {
		this->actionFunc = EnGe1_WaitTillOpened_GTGGuard;
		Flags_SetSwitch(globalCtx, (this->actor.params >> 8) & 0x3F);
		this->cutsceneTimer = 50;
		func_80106CCC(globalCtx);
	} else if ((this->skelAnime.curFrame == 15.0f) || (this->skelAnime.curFrame == 19.0f)) {
		Audio_PlayActorSound2(&this->actor, NA_SE_IT_HAND_CLAP);
	}
}

static void EnGe1_SetupOpen_GTGGuard(EnGe1* this, GlobalContext* globalCtx) {
	if ((func_8010BDBC(&globalCtx->msgCtx) == 5) && func_80106BC8(globalCtx)) {
		this->actionFunc = EnGe1_Open_GTGGuard;
		Animation_Change(&this->skelAnime, &gGerudoWhiteClapAnim, 1.0f, 0.0f,
						 Animation_GetLastFrame(&gGerudoWhiteClapAnim), ANIMMODE_ONCE, -3.0f);
		this->animation = &gGerudoWhiteClapAnim;
		this->animFunc = EnGe1_StopFidget;
		this->stateFlags &= ~GE1_STATE_IDLE_ANIM;
	}
}

static void EnGe1_RefuseEntryTooPoor_GTGGuard(EnGe1* this, GlobalContext* globalCtx) {
	if (func_8010BDBC(&globalCtx->msgCtx) == 2) {
		this->actionFunc = EnGe1_CheckForCard_GTGGuard;
		EnGe1_SetAnimationIdle(this);
	}
}

static void EnGe1_OfferOpen_GTGGuard(EnGe1* this, GlobalContext* globalCtx) {
	this->stateFlags |= GE1_STATE_TALKING;
	if ((func_8010BDBC(&globalCtx->msgCtx) == 4) && func_80106BC8(globalCtx)) {
		func_80106CCC(globalCtx);

		switch (globalCtx->msgCtx.choiceIndex) {
			case 0:
				if (gSaveContext.rupees < 10) {
					func_8010B720(globalCtx, 0x6016);
					this->actionFunc = EnGe1_RefuseEntryTooPoor_GTGGuard;
				} else {
					Rupees_ChangeBy(-10);
					func_8010B720(globalCtx, 0x6015);
					this->actionFunc = EnGe1_SetupOpen_GTGGuard;
				}
				break;
			case 1:
				this->actionFunc = EnGe1_CheckForCard_GTGGuard;
				EnGe1_SetAnimationIdle(this);
				break;
		}
	}
}

static void EnGe1_RefuseOpenNoCard_GTGGuard(EnGe1* this, GlobalContext* globalCtx) {
	this->stateFlags |= GE1_STATE_TALKING;
	if (func_8002F334(&this->actor, globalCtx)) {
		this->actionFunc = EnGe1_CheckForCard_GTGGuard;
		EnGe1_SetAnimationIdle(this);
	}
}

static void EnGe1_CheckForCard_GTGGuard(EnGe1* this, GlobalContext* globalCtx) {
	if (CHECK_QUEST_ITEM(QUEST_GERUDO_CARD)) {
		EnGe1_SetTalkAction(this, globalCtx, 0x6014, 100.0f, EnGe1_OfferOpen_GTGGuard);
	} else {
		//! @bug This outcome is inaccessible in normal gameplay since this function it is unreachable without
		//! obtaining the card in the first place.
		EnGe1_SetTalkAction(this, globalCtx, 0x6013, 100.0f, EnGe1_RefuseOpenNoCard_GTGGuard);
	}
}

// Gate Operator functions

static void EnGe1_WaitGateOpen_GateOp(EnGe1* this, GlobalContext* globalCtx) {
	this->stateFlags |= GE1_STATE_TALKING;

	if ((func_8010BDBC(&globalCtx->msgCtx) == 5) && func_80106BC8(globalCtx)) {
		func_80106CCC(globalCtx);
		this->actionFunc = EnGe1_CheckGate_GateOp;
		EnGe1_SetAnimationIdle(this);
	}
}

static void EnGe1_WaitUntilGateOpened_GateOp(EnGe1* this, GlobalContext* globalCtx) {
	if (this->cutsceneTimer > 0) {
		this->cutsceneTimer--;
	} else {
		EnGe1_SetAnimationIdle(this);
		this->actionFunc = EnGe1_CheckGate_GateOp;
	}
	this->stateFlags |= GE1_STATE_STOP_FIDGET;
}

static void EnGe1_OpenGate_GateOp(EnGe1* this, GlobalContext* globalCtx) {
	if (this->stateFlags & GE1_STATE_IDLE_ANIM) {
		this->actionFunc = EnGe1_WaitUntilGateOpened_GateOp;
		Flags_SetSwitch(globalCtx, (this->actor.params >> 8) & 0x3F);
		this->cutsceneTimer = 50;
		func_80106CCC(globalCtx);
	} else if ((this->skelAnime.curFrame == 15.0f) || (this->skelAnime.curFrame == 19.0f)) {
		Audio_PlayActorSound2(&this->actor, NA_SE_IT_HAND_CLAP);
	}
}

static void EnGe1_SetupOpenGate_GateOp(EnGe1* this, GlobalContext* globalCtx) {
	this->stateFlags |= GE1_STATE_TALKING;

	if ((func_8010BDBC(&globalCtx->msgCtx) == 5) && func_80106BC8(globalCtx)) {
		this->actionFunc = EnGe1_OpenGate_GateOp;
		Animation_Change(&this->skelAnime, &gGerudoWhiteClapAnim, 1.0f, 0.0f,
						 Animation_GetLastFrame(&gGerudoWhiteClapAnim), ANIMMODE_ONCE, -3.0f);
		this->animation = &gGerudoWhiteClapAnim;
		this->animFunc = EnGe1_StopFidget;
		this->stateFlags &= ~GE1_STATE_IDLE_ANIM;
	}
}

static void EnGe1_CheckGate_GateOp(EnGe1* this, GlobalContext* globalCtx) {
	if (Flags_GetSwitch(globalCtx, (this->actor.params >> 8) & 0x3F)) {
		EnGe1_SetTalkAction(this, globalCtx, 0x6018, 100.0f, EnGe1_WaitGateOpen_GateOp);
	} else {
		EnGe1_SetTalkAction(this, globalCtx, 0x6017, 100.0f, EnGe1_SetupOpenGate_GateOp);
	}
}

// Gate guard functions

static void EnGe1_Talk_GateGuard(EnGe1* this, GlobalContext* globalCtx) {
	this->stateFlags |= GE1_STATE_TALKING;

	if (func_8002F334(&this->actor, globalCtx)) {
		this->actionFunc = EnGe1_GetReaction_GateGuard;
		EnGe1_SetAnimationIdle(this);
		/* Triforce% Gerudo Mask functionality */
		if (WearingWorkingGerudoMask())
		{
			EnGe1_SetupOpen_Mask(this, globalCtx);
		}
	}
}

static void EnGe1_GetReaction_GateGuard(EnGe1* this, GlobalContext* globalCtx) {
	u16 reactionText;

	reactionText = Text_GetFaceReaction(globalCtx, 0x22);

	if (reactionText == 0) {
		reactionText = 0x6069;
	}
	
	/* Triforce% special reaction text: reroute "You've got guts coming
	around here wearing that!" to gatekeeper custom text
	 */
	if (reactionText == 0x719f && (WORKING_GERUDOMASK_VAR & WORKING_GERUDOMASK_BIT)) //"Got guts etc."
		reactionText = 0x0B40; //"A Gerudo child? Come in! etc."

	if (EnGe1_SetTalkAction(this, globalCtx, reactionText, 100.0f, EnGe1_Talk_GateGuard)) {
		if(reactionText == 0x0B40) return;
		
		this->animFunc = EnGe1_CueUpAnimation;
		this->animation = &gGerudoWhiteDismissiveAnim;
		Animation_Change(&this->skelAnime, &gGerudoWhiteDismissiveAnim, 1.0f, 0.0f,
						 Animation_GetLastFrame(&gGerudoWhiteDismissiveAnim), ANIMMODE_ONCE, -8.0f);
	}
}

// Archery functions

static void EnGe1_SetupWait_Archery(EnGe1* this, GlobalContext* globalCtx) {
	if (func_8002F334(&this->actor, globalCtx)) {
		this->actionFunc = EnGe1_Wait_Archery;
		EnGe1_SetAnimationIdle(this);
	}
}

static void EnGe1_WaitTillItemGiven_Archery(EnGe1* this, GlobalContext* globalCtx) {
	s32 getItemId = 0;

	if (Actor_HasParent(&this->actor, globalCtx)) {
		this->actionFunc = EnGe1_SetupWait_Archery;
		if (this->stateFlags & GE1_STATE_GIVE_QUIVER) {
			gSaveContext.itemGetInf[0] |= 0x8000;
		} else {
			gSaveContext.infTable[25] |= 1;
		}
	} else {
		if (this->stateFlags & GE1_STATE_GIVE_QUIVER) {
			switch (CUR_UPG_VALUE(UPG_QUIVER)) {
				//! @bug Asschest. See next function for details
				case 1:
					getItemId = GI_QUIVER_40;
					break;
				case 2:
					getItemId = GI_QUIVER_50;
					break;
			}
		} else {
			getItemId = GI_HEART_PIECE;
		}
		func_8002F434(&this->actor, globalCtx, getItemId, 10000.0f, 50.0f);
	}
}

static void EnGe1_BeginGiveItem_Archery(EnGe1* this, GlobalContext* globalCtx) {
	s32 getItemId = 0;

	if (func_8002F334(&this->actor, globalCtx)) {
		this->actor.flags &= ~0x10000;
		this->actionFunc = EnGe1_WaitTillItemGiven_Archery;
	}

	if (this->stateFlags & GE1_STATE_GIVE_QUIVER) {
		switch (CUR_UPG_VALUE(UPG_QUIVER)) {
			//! @bug Asschest: the compiler inserts a default assigning *(sp+0x24) to getItemId, which is junk data left
			//! over from the previous function run in EnGe1_Update, namely EnGe1_CueUpAnimation. The top stack variable
			//! in that function is &this->skelAnime = thisx + 198, and depending on where this loads in memory, the
			//! getItemId changes.
			case 1:
				getItemId = GI_QUIVER_40;
				break;
			case 2:
				getItemId = GI_QUIVER_50;
				break;
		}
	} else {
		getItemId = GI_HEART_PIECE;
	}

	func_8002F434(&this->actor, globalCtx, getItemId, 10000.0f, 50.0f);
}

static void EnGe1_TalkWinPrize_Archery(EnGe1* this, GlobalContext* globalCtx) {
	if (func_8002F194(&this->actor, globalCtx)) {
		this->actionFunc = EnGe1_BeginGiveItem_Archery;
		this->actor.flags &= ~0x10000;
	} else {
		func_8002F2CC(&this->actor, globalCtx, 200.0f);
	}
}

static void EnGe1_TalkTooPoor_Archery(EnGe1* this, GlobalContext* globalCtx) {
	if ((func_8010BDBC(&globalCtx->msgCtx) == 5) && func_80106BC8(globalCtx)) {
		func_80106CCC(globalCtx);
		this->actionFunc = EnGe1_Wait_Archery;
		EnGe1_SetAnimationIdle(this);
	}
}

static void EnGe1_WaitDoNothing(EnGe1* this, GlobalContext* globalCtx) {
}

static void EnGe1_BeginGame_Archery(EnGe1* this, GlobalContext* globalCtx) {
	Player* player = PLAYER;
	Actor* horse;

	if ((func_8010BDBC(&globalCtx->msgCtx) == 4) && func_80106BC8(globalCtx)) {
		this->actor.flags &= ~0x10000;

		switch (globalCtx->msgCtx.choiceIndex) {
			case 0:
				if (gSaveContext.rupees < 20) {
					func_8010B720(globalCtx, 0x85);
					this->actionFunc = EnGe1_TalkTooPoor_Archery;
				} else {
					Rupees_ChangeBy(-20);
					globalCtx->nextEntranceIndex = 0x129;
					gSaveContext.nextCutsceneIndex = 0xFFF0;
					globalCtx->fadeTransition = 0x26;
					globalCtx->sceneLoadFlag = 0x14;
					gSaveContext.eventInf[0] |= 0x100;
					gSaveContext.eventChkInf[6] |= 0x100;

					if (!(player->stateFlags1 & 0x800000)) {
						func_8002DF54(globalCtx, &this->actor, 1);
					} else {
						horse = Actor_FindNearby(globalCtx, &player->actor, ACTOR_EN_HORSE, ACTORCAT_BG, 1200.0f);
						player->actor.freezeTimer = 1200;

						if (horse != NULL) {
							horse->freezeTimer = 1200;
						}
					}

					this->actionFunc = EnGe1_WaitDoNothing;
				}
				break;

			case 1:
				this->actionFunc = EnGe1_Wait_Archery;
				func_80106CCC(globalCtx);
				break;
		}
	}
}

static void EnGe1_TalkOfferPlay_Archery(EnGe1* this, GlobalContext* globalCtx) {
	if ((func_8010BDBC(&globalCtx->msgCtx) == 5) && func_80106BC8(globalCtx)) {
		func_8010B720(globalCtx, 0x6041);
		this->actionFunc = EnGe1_BeginGame_Archery;
	}
}

static void EnGe1_TalkNoPrize_Archery(EnGe1* this, GlobalContext* globalCtx) {
	if (func_8002F194(&this->actor, globalCtx)) {
		this->actionFunc = EnGe1_TalkOfferPlay_Archery;
	} else {
		func_8002F2CC(&this->actor, globalCtx, 300.0f);
	}
}

static void EnGe1_TalkAfterGame_Archery(EnGe1* this, GlobalContext* globalCtx) {
	gSaveContext.eventInf[0] &= ~0x100;
	/*LOG_NUM("z_common_data.yabusame_total", gSaveContext.minigameScore, "../z_en_ge1.c", 1110);
	LOG_NUM("z_common_data.memory.information.room_inf[127][ 0 ]", gSaveContext.highScores[HS_HBA], "../z_en_ge1.c",
			1111);*/
	this->actor.flags |= 0x10000;

	if (gSaveContext.highScores[HS_HBA] < gSaveContext.minigameScore) {
		gSaveContext.highScores[HS_HBA] = gSaveContext.minigameScore;
	}

	if (gSaveContext.minigameScore < 1000) {
		this->actor.textId = 0x6045;
		this->actionFunc = EnGe1_TalkNoPrize_Archery;
	} else if (!(gSaveContext.infTable[25] & 1)) {
		this->actor.textId = 0x6046;
		this->actionFunc = EnGe1_TalkWinPrize_Archery;
		this->stateFlags &= ~GE1_STATE_GIVE_QUIVER;
	} else if (gSaveContext.minigameScore < 1500) {
		this->actor.textId = 0x6047;
		this->actionFunc = EnGe1_TalkNoPrize_Archery;
	} else if (gSaveContext.itemGetInf[0] & 0x8000) {
		this->actor.textId = 0x6047;
		this->actionFunc = EnGe1_TalkNoPrize_Archery;
	} else {
		this->actor.textId = 0x6044;
		this->actionFunc = EnGe1_TalkWinPrize_Archery;
		this->stateFlags |= GE1_STATE_GIVE_QUIVER;
	}
}

static void EnGe1_TalkNoHorse_Archery(EnGe1* this, GlobalContext* globalCtx) {
	this->stateFlags |= GE1_STATE_TALKING;
	if (func_8002F334(&this->actor, globalCtx)) {
		this->actionFunc = EnGe1_Wait_Archery;
		EnGe1_SetAnimationIdle(this);
	}
}

static void EnGe1_Wait_Archery(EnGe1* this, GlobalContext* globalCtx) {
	Player* player = PLAYER;
	u16 textId;

	if (!(player->stateFlags1 & 0x800000)) {
		EnGe1_SetTalkAction(this, globalCtx, 0x603F, 100.0f, EnGe1_TalkNoHorse_Archery);
	} else {
		if (gSaveContext.eventChkInf[6] & 0x100) {
			if (gSaveContext.infTable[25] & 1) {
				textId = 0x6042;
			} else {
				textId = 0x6043;
			}
		} else {
			textId = 0x6040;
		}
		EnGe1_SetTalkAction(this, globalCtx, textId, 200.0f, EnGe1_TalkOfferPlay_Archery);
	}
}

// General functions

static void EnGe1_TurnToFacePlayer(EnGe1* this, GlobalContext* globalCtx) {
	s16 angleDiff = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;

	if (ABS(angleDiff) <= 0x4000) {
		Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 6, 4000, 100);
		this->actor.world.rot.y = this->actor.shape.rot.y;
		func_80038290(globalCtx, &this->actor, &this->headRot, &this->unk_2A2, this->actor.focus.pos);
	} else {
		if (angleDiff < 0) {
			Math_SmoothStepToS(&this->headRot.y, -0x2000, 6, 6200, 0x100);
		} else {
			Math_SmoothStepToS(&this->headRot.y, 0x2000, 6, 6200, 0x100);
		}

		Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 12, 1000, 100);
		this->actor.world.rot.y = this->actor.shape.rot.y;
	}
}

static void EnGe1_LookAtPlayer(EnGe1* this, GlobalContext* globalCtx) {
	s16 angleDiff = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;

	if ((ABS(angleDiff) <= 0x4300) && (this->actor.xzDistToPlayer < 100.0f)) {
		func_80038290(globalCtx, &this->actor, &this->headRot, &this->unk_2A2, this->actor.focus.pos);
	} else {
		Math_SmoothStepToS(&this->headRot.x, 0, 6, 6200, 100);
		Math_SmoothStepToS(&this->headRot.y, 0, 6, 6200, 100);
	}
}

/*
 *
 * EXTRAS
 *
 */
static void EnGe1_WaitTillOpened_Mask(EnGe1* this, GlobalContext* globalCtx) {
	if (this->cutsceneTimer > 0) {
		this->cutsceneTimer--;
		if (this->cutsceneTimer == MASK_FENCE_TIME - 5) {
			this->fenceDrop = 1;
		}
	} else {
		EnGe1_SetAnimationIdle(this);
		this->actionFunc = EnGe1_SetNormalText;
	}

	this->stateFlags |= GE1_STATE_STOP_FIDGET;
}

static void EnGe1_Open_Mask(EnGe1* this, GlobalContext* globalCtx) {
	if (this->stateFlags & GE1_STATE_IDLE_ANIM) {
		this->actionFunc = EnGe1_WaitTillOpened_Mask;
		this->cutsceneTimer = MASK_FENCE_TIME;
		func_80106CCC(globalCtx);
	} else if ((this->skelAnime.curFrame == 15.0f) || (this->skelAnime.curFrame == 19.0f)) {
		Audio_PlayActorSound2(&this->actor, NA_SE_IT_HAND_CLAP);
	}
}

static void EnGe1_SetupOpen_Mask(EnGe1* this, GlobalContext* globalCtx) {
	this->actionFunc = EnGe1_Open_Mask;
	Animation_Change(&this->skelAnime, &gGerudoWhiteClapAnim, 1.0f, 0.0f,
					 Animation_GetLastFrame(&gGerudoWhiteClapAnim), ANIMMODE_ONCE, -3.0f);
	this->animation = &gGerudoWhiteClapAnim;
	this->animFunc = EnGe1_StopFidget;
	this->stateFlags &= ~GE1_STATE_IDLE_ANIM;
}

static float BounceEaseOut(float p)
{
	if(p < 4/11.0)
	{
		return (121 * p * p)/16.0;
	}
	else if(p < 8/11.0)
	{
		return (363/40.0 * p * p) - (99/10.0 * p) + 17/5.0;
	}
	else if(p < 9/10.0)
	{
		return (4356/361.0 * p * p) - (35442/1805.0 * p) + 16061/1805.0;
	}
	else
	{
		return (54/5.0 * p * p) - (513/25.0 * p) + 268/25.0;
	}
}

static void TriforceFence(Actor* thisx, GlobalContext* globalCtx)
{
	EnGe1* this = THIS;
	Actor *fence;
	float *prevY = this->fencePrevY;
	float dropDistance = 75; /* in-game units to drop fence */
	
	/* set up fence drop */
	if (!this->fence)
	{
		this->fence = Actor_FindNearby(globalCtx, thisx, ACTOR_BG_UMAJUMP, ACTORCAT_PROP, 1000);
		if (this->fence)
			prevY[0] = prevY[1] = this->fence->world.pos.y;
	}
	fence = this->fence;
	
	if (!fence)
		return;
	
	/* fence flag has been set */
	if (TRIFORCE_FENCE_GET)
	{
		fence->world.pos.y = fence->home.pos.y - dropDistance;
	}
	/* fence is dropping */
	else if (this->fenceDrop)
	{
		u32 frameRate = 20; /* oot runs at 20fps */
		u32 dropTime = frameRate * 1.0f; /* one second to drop the fence */
		float factor = this->fenceDrop;
		factor /= dropTime;
		if (factor > 1)
			factor = 1;
		factor = BounceEaseOut(factor);
		fence->world.pos.y = fence->home.pos.y - dropDistance * factor;
		if (this->fenceDrop > dropTime)
		{
			TRIFORCE_FENCE_SET;
			this->fenceDrop = dropTime;
		}
		/* bounce */
		else if (fence->world.pos.y > prevY[0] /* moved up once */
			&& prevY[0] < prevY[1] /* but was moving down before that */
		)
		{
			Audio_PlayActorSound2(fence, NA_SE_EN_IRONNACK_ARMOR_DEMO);
			//NA_SE_EV_WOOD_HIT
		}
		this->fenceDrop += 1;
		prevY[1] = prevY[0];
		prevY[0] = fence->world.pos.y;
	}
}
/*
 *
 * END
 *
 */

static void EnGe1_Update(Actor* thisx, GlobalContext* globalCtx) {
	EnGe1* this = THIS;

	Collider_UpdateCylinder(&this->actor, &this->collider);
	CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &this->collider.base);
	Actor_MoveForward(&this->actor);
	Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 40.0f, 25.0f, 40.0f, 5);
	this->animFunc(this);
	this->actionFunc(this, globalCtx);

	if (this->stateFlags & GE1_STATE_TALKING) {
		EnGe1_TurnToFacePlayer(this, globalCtx);
		this->stateFlags &= ~GE1_STATE_TALKING;
	} else {
		EnGe1_LookAtPlayer(this, globalCtx);
	}
	this->unk_2A2.x = this->unk_2A2.y = this->unk_2A2.z = 0;

	if (DECR(this->blinkTimer) == 0) {
		this->blinkTimer = Rand_S16Offset(60, 60);
	}
	this->eyeIndex = this->blinkTimer;

	if (this->eyeIndex >= 3) {
		this->eyeIndex = 0;
	}
	
	TriforceFence(thisx, globalCtx);
}

// Animation functions

static void EnGe1_CueUpAnimation(EnGe1* this) {
	if (SkelAnime_Update(&this->skelAnime)) {
		Animation_PlayOnce(&this->skelAnime, this->animation);
	}
}

static void EnGe1_StopFidget(EnGe1* this) {
	if (!(this->stateFlags & GE1_STATE_IDLE_ANIM)) {
		if (SkelAnime_Update(&this->skelAnime)) {
			this->stateFlags |= GE1_STATE_IDLE_ANIM;
		}
		this->stateFlags |= GE1_STATE_STOP_FIDGET;
	}
}

s32 EnGe1_OverrideLimbDraw(GlobalContext* globalCtx, s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3s* rot, void* thisx) {
	EnGe1* this = THIS;

	if (limbIndex == GE1_LIMB_HEAD) {
		rot->x += this->headRot.y;
		rot->z += this->headRot.x;
	}

	if (this->stateFlags & GE1_STATE_STOP_FIDGET) {
		this->stateFlags &= ~GE1_STATE_STOP_FIDGET;
		return 0;
	}

	// The purpose of the state flag GE1_STATE_STOP_FIDGET is to skip this code, which this actor has in lieu of an idle
	// animation.
	if ((limbIndex == GE1_LIMB_TORSO) || (limbIndex == GE1_LIMB_L_FOREARM) || (limbIndex == GE1_LIMB_R_FOREARM)) {
		rot->y += Math_SinS(globalCtx->state.frames * (limbIndex * 50 + 0x814)) * 200.0f;
		rot->z += Math_CosS(globalCtx->state.frames * (limbIndex * 50 + 0x940)) * 200.0f;
	}
	return 0;
}

static void EnGe1_PostLimbDraw(GlobalContext* globalCtx, s32 limbIndex, Gfx** dList, Vec3s* rot, void* thisx) {
	EnGe1* this = THIS;

	//OPEN_DISPS(globalCtx->state.gfxCtx, "../z_en_ge1.c", 1419);

	if (limbIndex == GE1_LIMB_HEAD) {
		u32/*Gfx**/ sHairstyleDLists[] = {
			gGerudoWhiteHairstyleBobDL,
			gGerudoWhiteHairstyleStraightFringeDL,
			gGerudoWhiteHairstyleSpikyDL
		};
		gSPDisplayList(POLY_OPA_DISP++, sHairstyleDLists[this->hairstyle]);
		Matrix_MultVec3f(&D_80A327A8, &this->actor.focus.pos);
	}

	//CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_en_ge1.c", 1427);
}

static void EnGe1_Draw(Actor* thisx, GlobalContext* globalCtx) {
	EnGe1* this = THIS;
	u32/*u64**/ sEyeTextures[] = {
		gGerudoWhiteEyeOpenTex,
		gGerudoWhiteEyeHalfTex,
		gGerudoWhiteEyeClosedTex
	};

	//OPEN_DISPS(globalCtx->state.gfxCtx, "../z_en_ge1.c", 1442);

	func_800943C8(globalCtx->state.gfxCtx);
	gSPSegment(POLY_OPA_DISP++, 0x08, SEGMENTED_TO_VIRTUAL(sEyeTextures[this->eyeIndex]));
	SkelAnime_DrawFlexOpa(globalCtx, this->skelAnime.skeleton, this->skelAnime.jointTable, this->skelAnime.dListCount,
						  EnGe1_OverrideLimbDraw, EnGe1_PostLimbDraw, this);

	//CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_en_ge1.c", 1459);
}
