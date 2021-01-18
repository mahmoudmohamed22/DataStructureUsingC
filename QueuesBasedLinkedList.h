//grad file
#ifndef QueuesBasedLinkedList
#define QueuesBasedLinkedList


#define MAXQUEUE 100
#define   QueueEntry int
typedef struct queuenode{
 QueueEntry entry;
 struct queuenode *next;
}QueueNode;

typedef struct queue {
   int size;// to usefull to determine size el queue

   QueueNode  *front;
    QueueNode *rear;


}Queue;

void static CreateQueue(Queue *pq);
void Enqueue (QueueEntry e,Queue *pq);
void Dequeue (QueueEntry *pe,Queue *pq);
int QueueEmpty(Queue *pq);
int QueueFull(Queue *pq);
int QueueSize(Queue *pq);
void ClearQueue(Queue *pq);
void TraverseQueue(Queue *pq,void(*pf)(QueueEntry e));
#endif // QueuesBasedArray
