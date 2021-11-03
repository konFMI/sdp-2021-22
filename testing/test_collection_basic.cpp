#include <stdio.h>
#define DEBUG
#include "TCollection.hpp"

int main(int argc, char* argcv[]) {

    printf("Test TCollection\n");

    TCollection<int> integers;

    
    ReturnType ret = integers.Create(5);
    LOG_INFO(TO_STRING(ret));
    printf("%s\n", TO_STRING(ret));
    
//    for (int i = 0; i < 5; i++) {
//        integers[i] = i;
//    }

//    for (int i = 0; i < 5; i++) {
//        printf(" %d", integers[i]);
//    }

    return 0;
}