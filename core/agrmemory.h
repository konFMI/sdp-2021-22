#ifndef AGRMEMORY_H
#include <stdlib.h>

class AGRMemory {
    public:

        static void* Alloc(int num, int size);
        static void* Calloc(int num, int sizes);
        static void Free(void *ptr);

    private:
    AGRMemory();
    ~AGRMemory();

};

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

#endif //AGRMEMORY_H