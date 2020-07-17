#pragma once

#include <cstdint>

namespace ttyd::memory {

extern "C" {

// memInit
// memClear
void *__memAlloc(uint32_t heap, uint32_t size);
void __memFree(uint32_t heap, void *ptr);
void *_mapAlloc(void* heap, uint32_t size);
// _mapAllocTail
// _mapFree
// smartInit
// smartReInit
// smartAutoFree
// smartFree
// smartAlloc
// smartGarbage
// smartTexObj

}

}