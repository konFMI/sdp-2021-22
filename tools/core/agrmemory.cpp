#include <stdlib.h>
#include "agrmemory.h"

AGRMemory::AGRMemory() {
}

AGRMemory::~AGRMemory() {
}

void* AGRMemory::Alloc(int num, int size) {
    void* ret = nullptr;
    if (size > 0) {
        ret = malloc(num * size);
        if (ret == nullptr) {
            // TODO:Memory leak?
        }
    }
    return ret;
}

void* AGRMemory::Calloc(int num, int size) {
    void* ret = nullptr;
    if (size > 0) {
        ret = calloc(num, size);
        if (ret == nullptr) {
            // TODO:Memory leak?
        }
    }
    return ret;
}

void AGRMemory::Free(void *ptr) {
    free(ptr);
}
