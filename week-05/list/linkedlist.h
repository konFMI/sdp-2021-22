#ifndef LINKEDLIST_H
#include <iostream>
#include <stdlib.h>
#include "agrtypes.h"
#include "agrutils.h"

namespace agr {

#define AGR_KEY_INVALID -1

template<typename ttype_t, typename tkey_t>
struct list_entry_t {
    ttype_t* data;
    list_entry_t<ttype_t, tkey_t>* next;
    tkey_t key;
};

template<typename ttype_t, typename tkey_t = int>
class LinkedList {
    public:
    LinkedList() : m_head(nullptr) {}
    LinkedList(const LinkedList & l) { CopyList(l); }
    ~LinkedList() { DeleteList(); }
    LinkedList& operator=(const LinkedList &l) {
        if (this != &l) {
            DeleteList();
            CopyList(l);
        }

        return *this;
    }

    int Add(ttype_t* e, tkey_t key) {
        list_entry_t<ttype_t, tkey_t>* new_entry = nullptr;
        if ((new_entry = AllocateEntry()) == nullptr) {
            return AGRMemoryAllocationFailure;
        }
        new_entry->data = e;
        new_entry->next = m_head;
        new_entry->key = key;   
        m_head = new_entry;

        return AGRSuccess;
    }

    ttype_t* Remove(tkey_t key) {
        list_entry_t<ttype_t, tkey_t>* ptr = m_head;
        ttype_t* result = nullptr;

        if (ptr && ptr->key == key) { /*If the key is in the head.*/
            m_head = m_head->next;
            result = ptr->data;
            free(ptr);
        } else if (ptr && ptr->next) { /*Not in the head and there are at least 2 entries.*/
            while ( ptr->next != nullptr && ptr->next->key != key)
            {
                ptr = ptr->next;
            }

            if (ptr->next && ptr->next->key == key) {
                result = ptr->next->data;
                free(ptr->next);
                ptr->next = nullptr;
            }
        } else { /* There isn't an entry with the given key. */
            result = nullptr;
        }
        return result;
    }

    list_entry_t<ttype_t, tkey_t>* Find(tkey_t key) {
        list_entry_t<ttype_t, tkey_t>* traverse = m_head;
        while (traverse) {
            if (traverse->key == key) {
                return traverse;
            }
            traverse = traverse->next;
        }
        return nullptr;
    }
    bool Contains(tkey_t key) {
        bool result = false;
        list_entry_t<ttype_t, tkey_t>* trav = m_head;
        while (trav && trav->key != key) {
            trav = trav->next;
        }
        if(trav && trav->key == key) {
            result = true;
        }
        return result;
    }
    bool Contains(void* pdata) {
        bool result = false;
        list_entry_t<ttype_t, tkey_t>* trav = m_head;
        while (trav && trav->data != pdata) {
            trav = trav->next;
        }
        if(trav && trav->data == pdata) {
            result = true;
        }
        return result;
    }
    bool HasCycle() const {
        list_entry_t<ttype_t, tkey_t> *pfirst, *psecond;
        if (m_head && m_head->next) {
            pfirst = m_head;
            psecond = m_head->next->next;

            while (psecond && psecond->next && psecond->next->next && pfirst != psecond) {
                pfirst=pfirst->next;
                psecond=psecond->next->next;
            }

            if(pfirst == psecond) {
                return true;
            } else {
                return false;
            }
        }
        return false;
    }
    
    /* "Making New Friends" idiom */    
    friend void FormatDataAddressMemoryLayoutBinary(std::ostream& out, const LinkedList<ttype_t, tkey_t>& l) {
        list_entry_t<ttype_t, tkey_t>* traverse = l.m_head;
        int nbits = 0;
        while (traverse &&  traverse->next) {
            nbits = agr::utils::PointerDiffBits(reinterpret_cast<void *>(traverse->next->data), reinterpret_cast<void *>(traverse->data));
            out << traverse->data
                << "+"
                << nbits 
                << " # "
                << agr::utils::FormatAddressMemoryLayoutBinary(reinterpret_cast<void *>(traverse->data), nbits)
                << " # "
                << *(traverse->data)
                << "\n";
            traverse = traverse->next;
        }
    }

    int CalculateSizeInBytes() const {
        int size = 0;
        list_entry_t<ttype_t, tkey_t>* trav = m_head;
        while (trav)
        {
            size += sizeof(*trav);

            trav = trav->next;
        }
        
        return size;
    }

    private:
    list_entry_t<ttype_t, tkey_t>* m_head;

    void CopyList(const LinkedList& l) {
    }
    void DeleteList() {
        
    }

    list_entry_t<ttype_t, tkey_t>* AllocateEntry() {
        list_entry_t<ttype_t, tkey_t>* p_entry = nullptr;
        p_entry = new list_entry_t<ttype_t, tkey_t>;
        if (p_entry == nullptr) {
            //Print error.
        } else {
            p_entry->next = nullptr;
            p_entry->key = AGR_KEY_INVALID;
        }
        return p_entry;
    }
};

}
#endif //LINKEDLIST_H
