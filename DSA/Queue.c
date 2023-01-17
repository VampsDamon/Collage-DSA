#include<stdio.h>
#include<stdlib.h>
struct Queue
{
    int f;
    int r;
    int size;
    int* arr;
};
int isFull(struct Queue *q)
{
    if(q->r==q->size-1)
      return 1;
    else
     return 0;  
}
int isEmpty(struct Queue *q)
{
    if(q->r==q->f)
     return 1;
    else
     return 0; 
}
void enqueue(struct Queue *q,int ele)
{
   if(isFull(q))
    printf("Queue is Full \n");
   else
   {
     q->r++;
     q->arr[q->r]=ele; 
   } 
}
int dequeue(struct Queue *q)
{
    int val=-1;
    if(isEmpty(q))
     printf("Queue is Empty \n");
     else
     {
        q->f++;
       val=q->arr[q->f];
           
     }
     return val;
}
int main()
{
  struct Queue q;
  q.r=q.f=-1;
  q.size=400;
  q.arr=(int *)malloc(q.size*sizeof(int));

  enqueue(&q,10);
  enqueue(&q,12);
  enqueue(&q,14);
  enqueue(&q,16);
  enqueue(&q,19);
  printf("%d\t",dequeue(&q));
return 0;
}
