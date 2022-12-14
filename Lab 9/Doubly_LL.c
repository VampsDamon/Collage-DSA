#include<stdio.h>
#include<stdlib.h>
struct node
{
    char ssn[25];
    char name[25];
    char dept[25];
    char designation[25];
    int sal;
    long int phone;
    struct node *next;
    struct node *prev;
};
typedef struct node* NODE;
NODE start;
start=NULL;
int count=0;
//Creating the first node
NODE create()
{
   NODE encode;
   encode=(struct node *)malloc(sizeof(struct node));
   if(encode==NULL){
    printf("Running out of memory\n");
    exit(0);
   }
   printf("Enter ssn,Name,Department,Designation,salary,Phone number of the employee :\n");
   scanf(" %s %s %s %s %d %ld",encode->ssn,encode->name,encode->dept,encode->designation,encode->sal,encode->phone);
   encode->next=NULL;
   encode->prev=NULL;
   return encode;
}
//Insertion from front
NODE insertFront()
{
    NODE new;
    new=create();
    if(start==NULL)
    {
         return new;
    }
    new->next=start;
    start->prev=new;
    count++;
    return new;
}
//Insertion from end
NODE insertEnd()
{
    NODE new,cur;
    new=create();
    if(start==NULL)
      return new;
    cur=start;
    while(cur->next!=NULL)
      cur=cur->next;
    cur->next=new;
    new->prev=cur;
    count++;
   return start;   
}
//Deletion from front
NODE dltFront()
{
    NODE ptr;
    if(start==NULL){
      printf("List is Empty\n");
      return NULL;
    }
    if(start->next==NULL)
    {
       printf("The employees node with the ssn: %s is deleted",start->ssn);
       free(start);
       count--;
       return NULL;
    }
    ptr=start;
    ptr->prev=NULL;
    free(start);
    count--;
    return ptr;

}
int main()
{

return 0;
}