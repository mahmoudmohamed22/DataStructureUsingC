#include "StackBaseArray.h"



 /*implementation level*/
 void CreateStack(Stack *ps){
 ps->Top=0;
 }


 int StackFull(Stack *ps){
 if(ps->Top==MAXSTACK)
    {
        return 1;
 }
 else{
        return 0;
 }
  }

  int StackEmpty(Stack *ps){
  if(ps->Top==0){
        return 1;
  }
  else{
        return 0;
  }

  }
  void push(StackEntry e,Stack *ps){
 ps->entry[ps->Top];
 ps->Top++;
 }

  void pop(StackEntry *pe,Stack *ps){
    ps->Top--;
  *pe=ps->entry[ps->Top];
  }
  /*deferance pop between StackTop pop decreament top but stacktop return last element*/
  void StackTop(StackEntry *pe,Stack *ps){
  *pe=ps->entry[ps->Top-1];
  }
  int StackSize(Stack *ps){
  return ps->Top;
  }
  /*deferance clearstack ,createstack his use then el user level */
  void ClearStack(Stack *ps){
  ps->Top=0;

  }/*function used when el user apply function to elements Stack*/
  /*parameter two is pointer to function*/
  void TraverseStack(Stack *ps,void (*pf)(StackEntry))
  {
      for(int i=ps->Top;i>0;i--){
        (*pf)(ps->entry[i-1]);//function implements elements
        //i-1 because top is increanted elements +1
      }

  }



