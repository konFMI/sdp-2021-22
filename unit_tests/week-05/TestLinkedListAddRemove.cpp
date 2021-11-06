#include "linkedlist.h"

int main(void) {

    agr::LinkedList<int, int> ll;

    constexpr int DATA_SIZE = 10000;
    int real_data[DATA_SIZE];
    int *actual_data[DATA_SIZE];

    for (int i = 0; i < DATA_SIZE; i++) {
        real_data[i]    = i;
        actual_data[i]  = 0;
    }

    for (int i = 0; i < DATA_SIZE; i++) {
        ll.Add(real_data+i, i);
    }

    for (int i = 0; i < DATA_SIZE; i++) {
        actual_data[i] = ll.Remove(i);
    }

    for (int i = 0; i < DATA_SIZE; i++) {
        if (real_data[i] != *actual_data[i]) {
            return 1;
        }
    }

    return 0;
}