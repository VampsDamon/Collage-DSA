#include<stdio.h>
#include<stdlib.h>
struct stack
{
   int top;
   int size;
   int *arr;
};
int isFull(struct stack *s)
{
    if(s->top==s->size-1)
     return 1;
    else
     return 0; 
}
int isEmpty(struct stack *s)
{
    if(s->top==-1)
     return 1;
    else
     return 0; 
}
void push(struct stack *s,int val)
{
    if(isFull(s))
     printf("Stack is Overflow\n");
    else
    {
        s->top++;
        s->arr[s->top]=val;
        printf("%d is Inserted\n",val);
    } 
}
int pop(struct stack *s)
{
    int ele=-1;
    if(isEmpty(s))
     printf("Stack is Underflow\n");
    else
    {
        ele =s->arr[s->top];
        s->top--;
    } 
    return ele;
}
int main()
{
  struct stack s;
  s.top=-1;
  s.size=10;
  s.arr=(int *)malloc(s.size*sizeof(int));
  push(&s,15);
  push(&s,14);
  push(&s,12);
  push(&s,11);
  printf("%d is Deleted \n",pop(&s));
  printf("%d is Deleted \n",pop(&s));
  printf("%d is Deleted \n",pop(&s));
  printf("%d is Deleted \n",pop(&s));
  printf("%d is Deleted \n",pop(&s));
return 0;
}