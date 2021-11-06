#ifndef AGRTYPES_H
#define AGRTYPES_H

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

#endif //AGRTYPES_H