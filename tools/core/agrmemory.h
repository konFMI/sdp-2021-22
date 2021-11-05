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

#endif //AGRMEMORY_H