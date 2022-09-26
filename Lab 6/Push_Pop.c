#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 20
char stack[MAX];
int top=-1;
int isEmpty()
{
    if(top==-1)
      return 1;
    else
      return 0;  
}
int isFull()
{
    if(top==(MAX-1))
      return 1;
    else 
     return 0;  
}
void push(char a)
{
  if(isFull())
  {
    printf("Stack is Overflow ..... !\n");
    exit(1);
  }
     top=top+1;   
     stack[top]=a;
}
char pop()
{
    char ret;
    if(isEmpty())
    {
      printf("Stack is Underflow ..... !\n");
      exit(1);
    }
        ret=stack[top];
        top=top-1;
    return ret;
}

int main()
{
    char str[20];
    unsigned int i;

printf("Enter String :-- ");
gets(str);
    for(i=0;i<strlen(str);i++)
     push(str[i]);
    for(i=0;i<strlen(str);i++)
     str[i]=pop();
printf(" String in Reverse order :-- ");
puts(str);      
return 0;
}
