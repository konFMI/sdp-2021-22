#include "list.h"

list_t *CreateList(data_t *pdata) {
    list_t *plist = new list_t;
    if (!plist) {
        std::cout << "Error allocationg list_t\n";
        return nullptr;
    }
    plist->m_data = pdata;
    plist->m_next = nullptr;
    plist->m_index = -1;

    return plist;
}

void DestroyList(list_t **phead) {
    list_t *plist = *phead;

    while (*phead)
    {
        *phead = (*phead)->m_next;
        delete plist;
        plist = *phead;
    }
}

void Add(list_t **head, data_t *m_data) {
    list_t *nhead = CreateList(m_data);
    nhead->m_next = *head;
    if (*head) {
        nhead->m_index = (*head)->m_index + INDEX_INCREMENT_VALUE;
    }
    *head = nhead;
}

//TODO: May extend the pretty printing into a lirary.
void PrincConsoleListEntry(list_t *entry) {
    std::cout << "EA: " << entry << " {\n";
    if (entry && entry->m_data) {
        std::cout << "\tEDA: " << entry->m_data             << " {\n";
        std::cout << "\t\tEDV: " << entry->m_data->m_data     << "\n";
        std::cout << "\t\tEDK: " << entry->m_data->m_key      << "\n";
        std::cout << "\t}\n";
        std::cout << "\tEI: "    << entry->m_index << "\n";
    }
    std::cout << "}\n";
}

void PrintConsole(list_t *phead) {
    while (phead)
    {
        PrincConsoleListEntry(phead);
        phead = phead->m_next;
    }
}

list_t  *Find(list_t *plist, int key) {
    list_t* traverse = plist;
    while (traverse && traverse->m_data) {
        if (traverse->m_data->m_key == key) {
            return traverse;
        }
        traverse = traverse->m_next;
    }
    return nullptr;
}

bool Contains(list_t *trav, int key) {
    bool result = false;
    while (trav && trav->m_data && trav->m_data->m_key != key) {
        trav = trav->m_next;
    }
    if(trav && trav->m_data && trav->m_data->m_key == key) {
        result = true;
    }

    //TODO: Add logging system.
    std::cout << "The list " << ((result)? "contains":"doesn't contain") << " the key " << key << "\n";

    return result;
}


bool Contains(list_t *list, data_t *pdata) {
    bool result = false;
    list_t *trav = list;
    while (trav && trav->m_data != pdata) {
        trav = trav->m_next;
    }
    if(trav && trav->m_data == pdata) {
        result = true;
    }

    //TODO: Add logging system.
    std::cout << "The list " << ((result)? "contains":"doesn't contain") << " a pointer that points to " << pdata << "\n";
    return result;
}

bool HasCycle(list_t *list) {
    list_t *turttle, *rabbit;
    if (list && list->m_next) {
        turttle = list;
        rabbit = list->m_next->m_next;
        while (rabbit && rabbit->m_next && rabbit->m_next->m_next && turttle != rabbit) {
            turttle = turttle->m_next;
            rabbit = rabbit->m_next->m_next;
        }
        if(rabbit == turttle) {
            return true;
        } else {
            return false;
        }
    }
    return false;
}

void Reverse(list_t **plist) {
    list_t *rlist = nullptr;
    if (plist && *plist) {
        while (*plist)
        {
            Add(&rlist, (*plist)->m_data);
            *plist = (*plist)->m_next;
        }

        DestroyList(plist);
        *plist = rlist;
    }
}

list_t *ReverseRecursive(list_t **pplist, list_t *plist) {
    if (plist == nullptr) return nullptr;
    if (plist->m_next == nullptr){
        *pplist = plist; 
    }
    list_t *node = ReverseRecursive(pplist, plist->m_next);
    node->m_next = plist;
    
    if (pplist && *pplist) {
        //(*pplist)->m_next = previous;
        //previous->m_next = nullptr;
    }

    return nullptr;
}

list_t *MergeOrderedLists(list_t *lists[], int size, bool (*Comparer)(int, int)) {
    list_t *mergedList = nullptr;
    
    //TODO: Implement for more than two lists.

    return mergedList;
}

list_t *MergeOrderedLists(list_t *leftl, list_t *rightl, bool (*Comparer)(int, int)) {
    list_t *mergedList = nullptr;

    while (leftl && rightl && leftl->m_data && rightl->m_data) {
        if (Comparer(leftl->m_data->m_key, leftl->m_data->m_key)) {
            Add(&mergedList, leftl->m_data);
            leftl = leftl->m_next;
        } else {
            Add(&mergedList, rightl->m_data);
            rightl = rightl->m_next;
        }
    }

    while (leftl) {
        Add(&mergedList, leftl->m_data);
        leftl = leftl->m_next;
    }

    while (rightl) {
        Add(&mergedList, rightl->m_data);
        rightl = rightl->m_next;
    }

    return mergedList;
}
