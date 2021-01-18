//grad file
#ifndef QueuesBasedArray
#define QueuesBasedArray


#define MAXQUEUE 100
#define   QueueEntry int

typedef struct queue {
    int size;

    int front;
    int rear;
    QueueEntry entry[MAXQUEUE];

}Queue;

void CreateQueue(Queue *pq);
void Enqueue (QueueEntry e,Queue *pq);
void Dequeue (QueueEntry *pe,Queue *pq);
int QueueEmpty(Queue *pq);
int QueueFull(Queue *pq);
int QueueSize(Queue *pq);
void ClearQueue(Queue *pq);
void TraverseQueue(Queue *pq,void(*pf)(QueueEntry e));
#endif // QueuesBasedArray
