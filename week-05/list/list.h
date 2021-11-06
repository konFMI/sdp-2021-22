#ifndef AGRLIST_H
#define AGRLIST_H

#include <iostream>

#define SIZE 100
#define INDEX_INCREMENT_VALUE 1
#define PRINT_ADDR(addr)(std::cout << reinterpret_cast<void *>((addr)))


struct data_t {
    int m_data;
    int m_key;
};

struct list_t {
    list_t *m_next;
    data_t *m_data;
    int m_index;
};

/*  list API  */

/*  
    Creates a |list_t| structure and initializes
    its  |m_data| pointer to point at |pdata|.
*/
list_t *CreateList(data_t *pdata);

/*  
    Releases the memory for every |list_t| structure,
    BUT NOT the memory pointed by |m_data|. Whoever
    created it should manage it.
*/
void DestroyList(list_t **phead);

/*
    Creates a |list_t| structure. Initializes its member
    |m_data| to point at |m_data|. And its |m_next| to
    point at |*head|. Hence the navalue of |*head| will
    be the newly create  |list_t| structure.
*/
void Add(list_t **head, data_t *m_data);


list_t *Find(list_t *plist, int key); 

/*
    Both Cointains(..) functions search for the first
    finding of either |key| or |pdata|. If there is a cycle
    the OS may terminate the application. Keep in mind.
*/
bool Contains(list_t *trav, int key);
bool Contains(list_t *list, data_t *pdata);

/*
    Searches for a cicle using Floyd's Algorithm.Or
    also know as the turtle and rabbit method.
*/
bool HasCycle(list_t *list);

/*
    Reverses list by creating a new one and destoying the old one.
    Then reasignt the newly created to the |*plist|.
*/
void Reverse(list_t **plist);

/*
    Recursive.
*/
list_t *ReverseRecursive(list_t **pplist, list_t *plist);


/*  Utils API   */
void PrincConsoleListEntry(list_t *entry);
void PrintConsole(list_t *phead);

/* 
    Merges given lists in the array |lists| and uses the Comparer(..) to
    specify the desired order.
 */
list_t *MergeOrderedLists(list_t *lists[], int size, bool (*Comparer)(int, int));

/*
    Merges 2 lists using the Comparer(..).
*/
list_t *MergeOrderedLists(list_t *leftl, list_t *rightl, bool (*Comparer)(int, int));

/*  Return number of ocurencess of |str| int the list of strings. */
int Count
#endif //AGRLIST_H
