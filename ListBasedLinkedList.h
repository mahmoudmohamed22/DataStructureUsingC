///grad file
#ifndef ListBasedLinkedList
#define ListBasedLinkedList
#define listEntry int
#include <stdlib.h>

typedef struct listNode {
   listEntry entry;
   struct ListNode * next;
}ListNode;

typedef  struct list {
ListNode *head;
int size ;
}List;

void CreateList(List *pl);

int ListEntry(List *pl);

int ListFull(List *pl);

int ListSize(List *pl);

void DestroyList(List *pl);

void TraverseList(List *pl , void (*visit)(listEntry ) );

void InSertList(int pos ,listEntry e, List *pl);

void DeleteElementList(int pos ,listEntry *pe ,List *pl);

void RetrieveList(int pos , listEntry *pe ,List *pl);

void RePlaceList(int pos , listEntry e ,List *pl);






#endif // ListBasedLinkedList
