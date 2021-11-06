#ifndef AGRUTILS_H
#define AGRUTILS_H
#include <string>
#include "agrtypes.h"

namespace agr {
namespace utils {
#define ADDRESS_INT uint64_t

#define ABS(a)(((a) < 0)? (-(a)):(a))

const char* ToString(ReturnType returnType);

std::string FormatAddressMemoryLayoutBinary(void* ptr, int nbits);

ADDRESS_INT PointerDiffBits(void* ptr1, void* ptr2);

bool Compare(int x, int y);

}
}
#endif //AGRUTILS_H