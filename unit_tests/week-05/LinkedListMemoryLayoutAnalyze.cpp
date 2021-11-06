#include "linkedlist.h"
#include "agrutils.h"

int main(void) {
    
    
    agr::LinkedList<uint32_t, uint32_t> ll1;
    agr::LinkedList<int, int> ll2;

    constexpr int DATA_SIZE = 1;
    uint32_t real_data1[DATA_SIZE];
    int real_data2[DATA_SIZE];

    for (int i = 0; i < DATA_SIZE; i++) {
        real_data1[i]    = -1;
        real_data2[i]    = -1;
    }

    for (int i = 0; i < DATA_SIZE; i++) {
        ll1.Add(real_data1+i, i);
        ll2.Add(real_data2+i, i);
    }
    
    FormatDataAddressMemoryLayoutBinary(std::cout, ll1);

    return 0;
}