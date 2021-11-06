#include "linkedlist.h"

int main(void) {

    agr::LinkedList<int, int> ll;

    constexpr int DATA_SIZE = 10000;
    int real_data[DATA_SIZE];
    agr::list_entry_t<int, int>* entry = nullptr;

    for (int i = 0; i < DATA_SIZE; i++) {
        real_data[i]    = i;
    }

    for (int i = 0; i < DATA_SIZE; i++) {
        ll.Add(real_data+i, i);
    }

    for (int i = 0; i < DATA_SIZE; i++) {
        entry = ll.Find(i);
        if (*(entry->data) != real_data[i]) {
            return 1;
        }
    }

    return 0;
}