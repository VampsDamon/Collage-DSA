#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int rear=-1;
int front=-1;
int queue[MAX];
int overflow()
{
    if(rear==MAX-1)
      return 1;
    else
     return 0;  
}
int underflow()
{
    if(front==-1 || front>rear)
      return 1;
    else
     return 0;  
}
void push(int queue[],int ele)
{
    if(overflow())
    {
      printf("Queue Is Overflow\n");
    }
   else{ 
   if(front==-1 )
    front=rear=0;
    else
     rear=rear+1;
    queue[rear]=ele; 
   }
}
void deletion()
{
    int val;
    if(underflow())
    {
        printf("Queue is Underflow \n");
    }
    else
    {
      val=queue[front];
      front=front+1;
      printf("Deleted element is :- %d\n",val);
    }
}

void display(int queue[])
{
    int i;
   if(underflow())
    printf("Queue is Empty\n");
    else
    {
        printf("Elements of queue are :- \n");
      for(i=front;i<=rear;i++)
      {
        printf("%d\t",queue[i]);
      }
      printf("\n");
    }
}
int main()
{
int ch,ele;
do{
printf("1 --> Insert Element\n");
printf("2 --> Delete Element\n");
printf("3 --> Display  Queue\n");
printf("4 --> Exit\n");
printf("Enter Your Choice :- ");
scanf("%d",&ch);
switch (ch)
{
  case 1:
  printf("Enter element to Insert :- ");
  scanf("%d",&ele);
  push(queue,ele);
  break;
  case 2:
  deletion(queue);
  break;
  case 3:
  display(queue);
  break;
  case 4:
  printf("Bye Bye .... !\n");
   exit(1);
  default:
   printf("Wrong Input\n");
}
}while (ch!=4);
return 0;
}