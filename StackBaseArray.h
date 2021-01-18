#ifndef StackBaseArray

#define StackBaseArray



#define MAXSTACK  100
#define StackEntry  int
typedef struct stack {
int Top;
StackEntry entry[MAXSTACK];
}Stack;

void CreateStack(Stack *ps);
void push(StackEntry e,Stack *ps);
int StackFull(Stack *ps);
void pop(StackEntry *pe,Stack *ps);
int StackEmpty(Stack *ps);
void StackTop(StackEntry *pe,Stack *ps);
int StackSize(Stack *ps);
void ClearStack(Stack *ps);


void TraverseStack(Stack *ps,void (*pf)(StackEntry));
#endif
