#include<stdlib.h>
#include<stdio.h>
#define MAX 10
int top = -1;
int stack[MAX];
int isFull();
int isEmpty();
void push(int);
void display();
int pop();
void pal(int,int);
int isFull()
{
    if(top==MAX-1)
     return 1;
    else 
    return 0; 
}
int isEmpty()
{
    if(top==-1)
     return 1;
    else 
    return 0; 
}
void push(int x)
{
    if(isFull())
    {
        printf("Stack is Overflow\n");
        return;
    }
    top++;
    stack[top]=x;
}
int pop()
{
    int ele;
    if(isEmpty())
    {
        printf("Stack is Underflow\n");
        exit(1);
    }
    ele=stack[top];
    top--;
    return ele;
}
void pali()
{
    int ele;
    if(isEmpty())
    {
        printf("Stack is Underflow\n");
        exit(1);
    }
    int k=-1;
  int n=top;
  int temp[n];
  for (int i = 0; i <= n; i++)
  {
     temp[i]=pop();
     printf("%d\t",temp[i]);
  }
  printf("\n");
  for (int i = 0; i <= n; i++)
  {
    if(temp[i]==stack[i])
    {
       k++;
    }
  }
  if(k==n)
   printf("Stack is Palindrome \n");
  else
   printf("Stack is not Palindrome\n");  
}
void display()
{
    if(isEmpty())
    {
        printf("Stack is Underflow\n");
        return;
    }
    
    for(int i =0;i<=top;i++)
    {
     printf("%d\t",stack[i]);
    }
     printf("\n");
}

int main()
{
    int ch,item;
    do
    {
    printf("1 --> Push data \n");
    printf("2 --> Pop data \n");
    printf("3 --> Display Stack \n");
    printf("4 --> Check Palindrome \n");
    printf("5 --> Exit \n");
    printf("Enter your choice :- ");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
    printf("Enter element to insert :- ");
    scanf("%d",&item);
    push(item);         
    break;
    case 2:
    printf("Deleted element is %d\n",pop());
    break;
    case 3:
    printf("Stacks elements are :- \n");
    display();
    break;
    case 5:
    printf("Tata Bye Bye.....\n");
    exit(1);
    case 4:
    printf("Reverse of Stack :- \n");
    pali();
    break;
    default:
    printf("Wrong Input\n");
    }
    }while(ch!=5);

return 0;
}
