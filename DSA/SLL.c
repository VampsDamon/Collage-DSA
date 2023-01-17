#include<stdio.h>
#include<stdlib.h>
struct node 
{
  struct node *next;
  int data;
}*start;
void insertBeg(int ele)
{
    struct node *new;
    new=(struct node*)malloc(sizeof(struct node));
    new->data=ele;
    if(start==NULL)
      new->next=NULL;
    else
    new->next=start;
    start=new;  
}
void insertEnd(int ele)
{
    struct node *new,*ptr;
    new=(struct node*)malloc(sizeof(struct node));
    new->data=ele;
    ptr=start;
    if(start==NULL)
    {
        start=new;
        new->next=NULL;
    }
    else
    {

      while(ptr->next!=NULL)
     {
        ptr=ptr->next;
     }
      ptr->next=new;
      new->next=NULL;
    }
}
int dltFront()
{
    struct node *ptr;
    int val;
    ptr=start;
    if(start==NULL)
    {
     printf("List is Empty\n");
    }
    else
    {
       val=ptr->data;
       start=ptr->next;
       free(ptr);
    }
    return val;
}
int dltEnd()
{
    struct node *ptr,*preptr;
    int val=-1;
    if(start==NULL)
    {
     printf("List is Empty\n");
    }
    else
    {
        ptr=start;
        while(ptr->next!=NULL)
        {
            preptr=ptr;
           ptr=ptr->next;
        }
       val=ptr->data;
       preptr->next=NULL;
       free(ptr);
    }
    return val;
}
void display()
{
  struct node *ptr;
  ptr=start;
  if(start==NULL)
  {
   printf("List is empty\n");
  }
  else
  {
  while(ptr!=NULL)
  {
    printf("%d\t",ptr->data);
    ptr=ptr->next;
  }

  }
}
int main()
{
 
 insertBeg(10);
  insertBeg(12);
  insertBeg(13);
  insertBeg(15);
  insertBeg(16);
   insertEnd(19);
  insertEnd(20);
  insertEnd(20);
  insertEnd(20);
 printf("Deleted element :- %d\n",dltEnd());
 printf("Deleted element :- %d\n",dltEnd());
 printf("Deleted element :- %d\n",dltEnd());
 printf("Deleted element :- %d\n",dltEnd());
  printf("Deleted element :- %d\n",dltFront());
  printf("Deleted element :- %d\n",dltFront());
display();


return 0;
}