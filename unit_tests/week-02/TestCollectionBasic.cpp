#include <stdio.h>
#include "collection.h"
#include "agrutils.h"

int main(int argc, char* argcv[]) {

    printf("Test Collection\n");

    Collection<int> integers;

    
    ReturnType ret = integers.Create(5);
    printf("%s\n", ToString(ret));
    
//    for (int i = 0; i < 5; i++) {
//        integers[i] = i;
//    }

//   for (int i = 0; i < 5; i++) {
//       printf(" %d", integers[i]);
//   }

    return 0;
}