#include "agrlog.h"
#include "agrmemory.h"

int TestMemoryUnitCallocVerifyThatIsZeroed() {
    char *str = nullptr;
    int count =5;
    str = static_cast<char*>(AGRMemory::Calloc(count, sizeof(char)));

    for (int i = 0; i < count; i++)
    {
        if (str[i] != 0) {
            return 1;
        }
    }
    return 0;
}

int main(int argc, char* argcv[]) {
    return TestMemoryUnitCallocVerifyThatIsZeroed();
}