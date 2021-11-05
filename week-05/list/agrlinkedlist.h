#ifndef AGRLINKEDLIST_H
#include <stdlib.h>

#include "agrtypes.h"

namespace agr {

#define AGR_KEY_INVALID -1

template<typename T>
struct entry_t {
    T data;
    entry_t* next;
    int key;
};

template<typename T>
class LinkedList {
    public:
    LinkedList() : m_head(nullptr), {}
    ~LinkedList() { DeleteList(); }

    int AddFront(T& e) {
        entry_t* new_entry = nullptr;
        if ((new_entry = AllocateEntry()) == nullptr) {
            return AGRMemoryAllocationFailure;
        }
        new_entry->data = e;
        new_entry->next = m_head;
        m_head = new_entry;

        return AGRSuccess;
    }

    int Remove(int key) {
        entry_t* ptr = m_head;
        if (ptr) {
            //todo: finish
            while ( ptr != nullptr && ptr->data.key != key)
            {
                ptr = ptr->next;
            }

            if (ptr) {

            }
        }        
    }

    private:
    entry_t* m_head;

    void CopyList(const LinkedList& l) {

    }

    void DeleteList() {
        
    }

    entry_t* AllocateEntry() {
        entry_t* p_entry = nullptr;

        p_entry = new p_entry;
        if (p_entry == nullptr) {
            //Print error.
            return nullptr;
        } else {
            p_entry->next = nullptr;
            p_entry->key = AGR_KEY_INVALID
        }
    }
};
}
#endif //AGRLINKEDLIST_H