#ifndef MY_TYPES_H
#define MY_TYPES_H

#define INTEGER  int
#define CHAR     char
#define BOOL     bool
#define VOID     void
#define CONST    const

enum ReturnType {
    AGRSuccess                      = 0,
    AGRReturnNone                   = 1,
    AGRCreateError                  = 2,
    AGRMemoryAllocationSuccesss     = 3, 
    AGRMemoryAllocationFailure      = 4,
    AGRFreeMemorySuccess            = 5,
    AGRFreeMemoryFailure            = 6
};

CONST CHAR *TO_STRING(ReturnType returnType) {
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
#endif //MY_TYPES_Hs