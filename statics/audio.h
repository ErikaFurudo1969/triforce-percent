void Statics_AudioCodePatches(u8 isLiveRun);
void Statics_AudioRegisterStaticData(void* ram_addr, s32 size, 
    u8 type, s32 data1, s32 data2);

extern void func_800F5E18(u8 playerIdx, u16 seqId, u8 fadeTimer, s8 arg3, s8 arg4); // internal start seq
extern void Audio_QueueSeqCmd(u32 cmd);
extern void func_800F5C64(u16 seqId); // Audio_PlayFanfare
