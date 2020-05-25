#ifndef __DMA_PATCHER_H__
#define __DMA_PATCHER_H__

#include "../common/common.h"
#include "../common/z_functions.h"

void DmaPatcher_AddPatch(u32 vrom, u8* patch);
void DmaPatcher_ReplaceFile(u32 filenum, void* injectedAddr, u32 newsize);

#endif //__DMA_PATCHER_H__
