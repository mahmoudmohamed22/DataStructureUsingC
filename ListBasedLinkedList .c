#include "ListBasedLinkedList.h"
#include <stdlib.h>

void CreateList(List *pl){
  pl->head=NULL;
  pl->size=0;

}

int ListEmpty(List *pl){
     return pl->size==0;

}

int ListFull(List *pl){
 return 0;
}

int ListSize(List *pl){

return pl->size;
}

void DestroyList(List *pl){ /*function used delete to all elements*/
ListNode *q;
while(pl->head){
    q=pl->head->next;
    free(pl->head);
    pl->head=q;
}

pl->size=0;
}

void TraverseList(List *pl , void (*visit)(listEntry ) ){
ListNode *p=pl->head ;
while(p){
    (*visit)(p->entry);
    p=p->next;

}

}

void InSertList(int pos ,listEntry e, List *pl)
{
ListNode *p,*q;
int i=0;
p=(ListNode*)malloc(sizeof(ListNode));

p->entry=e;
p->next=NULL;
if(pos==0){
        p->next=pl->head;
    pl->head=p;

}else{
for(q=pl->head;i=0;i<pos-1;i++){
    q=q->next;
    p->next=q->next;
    q->next=p;
}
pl->size++;

}


}

void DeleteElementList(int pos ,listEntry *pe ,List *pl){
int i=0

}

void RetrieveList(int pos , listEntry *pe ,List *pl){}

void RePlaceList(int pos , listEntry e ,List *pl){}



