#include <inttypes.h>
#include "agrutils.h"
namespace agr {
    namespace utils {
        const char* ToString(ReturnType returnType) {
            switch(returnType) {
                case AGRReturnNone:
                    return "AGRReturnNone";
                case AGRSuccess:
                    return "AGRSuccess";
                case AGRCreateError:
                    return "AGRCreateError";
                case AGRMemoryAllocationSuccesss:
                    return "AGRMemoryAllocationSuccesss";
                case AGRMemoryAllocationFailure:
                    return "AGRMemoryAllocationFailure";
                case AGRFreeMemorySuccess:
                    return "AGRFreeMemorySuccess";
                case AGRFreeMemoryFailure:
                    return "AGRFreeMemoryFailure";
                default:
                    return "";
            }
        }

        std::string FormatAddressMemoryLayoutBinary(void * ptr, int nbits) {
            ADDRESS_INT mask = (ADDRESS_INT)1 << (nbits-1);
            ADDRESS_INT address = *reinterpret_cast<ADDRESS_INT *>(ptr);
            std::string layout = "";

            for (int i = 0; i < nbits; i++) {
                layout += ((address & mask)? "1":"0");
                mask = mask >> 1;
            }

            return layout;
        }

        ADDRESS_INT PointerDiffBits(void* ptr1, void* ptr2) {
            ADDRESS_INT address1 = reinterpret_cast<ADDRESS_INT>(ptr1);
            ADDRESS_INT address2 = reinterpret_cast<ADDRESS_INT>(ptr2);
            ADDRESS_INT diff = -(address1 - address2);
            return diff*8;
        }

        bool Compare(int x, int y) {
            return x <= y;
        }

    }
}