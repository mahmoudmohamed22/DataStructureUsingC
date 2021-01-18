#include "QueuesBasedLinkedList.h"

#include <stdlib.h>


void static CreateQueue(Queue *pq)
{
    pq->front = NULL;
    pq->rear = NULL;
    pq->size=0;

}

void Enqueue (QueueEntry e,Queue *pq)
{
QueueNode *pn=(QueueNode *)malloc(sizeof(QueueNode));

pn->next=NULL;
pn->entry=e;
if(!pq->rear){
   pq->front=pn;
}else
{
    pq->rear->next=pn;
pq->rear=pn;
pq->size++;
}
}
void Dequeue (QueueEntry *pe,Queue *pq)
{
    QueueNode *pn=pq->front;
    *pe =pn->entry;
    pq->front=pn->next;
    free(pn);
    if(! pq->front )//pq->front==null to enter
        {
            pq->rear=NULL;
    pq->size--;
        }

}
int QueueEmpty(Queue *pq)
{
return !pq->front;
}
int QueueFull(Queue *pq)
{
    return 0;
}
int QueueSize(Queue *pq)
{
return pq->size;
}
void ClearQueue(Queue *pq)
{
    while(pq->front)//pq->front !=null
        {
        pq->rear=pq->front->next;
    free(pq->front);
    pq->front=pq->rear;
        }
pq->size=0;
}
void TraverseQueue(Queue *pq,void(*pf)(QueueEntry e)){
for(QueueNode *pn=pq->front;pn;pn=pn->next)
    {
    (*pf)(pn->entry);
    }




}
