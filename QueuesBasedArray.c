#include "QueuesBasedArray.h"



void CreateQueue(Queue *pq){

pq->size=0;
pq->front=0;
pq->rear =-1;
/*
front =0 ,rear =-1 queue is empty
may front =4 ,rear =3 but user is enter max size queue is 4
*/

}
void Enqueue (QueueEntry e,Queue *pq){
//because queue circular
        if(pq->rear==MAXQUEUE-1){
            pq->rear=0;

        }else
        {
            pq->rear++;

        }
/* or code this is pq->rear=(pq->rear+1)%MAXQUEUE*/
pq->rear=e;
pq->size++;
/* in case Eequeue ,rear is increment ,front is constant*/
}
void Dequeue (QueueEntry *pe,Queue *pq){
*pe=pq->entry[pq->front];

pq->front=(pq->front+1)%MAXQUEUE;
/*
if(pq->front ==MAXQUEUE-1){
    pq->front=0
}else{
pq->front++;
}
*/

/* in case Dequeue ,front is increment ,rear is constant*/
pq->size--;

}
int QueueEmpty(Queue *pq){
return !pq->size;

/*return one is empty but zero isn't empty */
}
int QueueFull(Queue *pq){
return (pq->size==MAXQUEUE);
/*return one is full but zero isn't full */
}
int QueueSize(Queue *pq){
return pq->size;
}
void ClearQueue(Queue *pq){

pq->size=0;
pq->front=0;
pq->rear =-1;
/*clear is clear size ,front,rear ,array not cleared*/
}
void TraverseQueue(Queue *pq,void(*pf)(QueueEntry e)){
int pos,s;
for(pos=pq->front,s=0;s<pq->size;s++){
    (*pf)(pq->entry[pos]);
    pos=(pos+1)%MAXQUEUE;

}
/*may to check front to rear
cheak pos is rear
*/
}

