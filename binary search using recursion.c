#include<stdio.h>
int search(int ar[],int n,int l,int u,int val)
{

   int mid= (l+u)/2;
   if(ar[mid]==val)
  {
   printf("%d is found at %d \n",val,mid+1);
   return 1;
  } 
  else if(ar[mid]<val)
  return search(ar,n,mid+1,u,val);
  else
   return search(ar,n,l,mid-1,val);
}
int main()
{ 
  int n;
  printf("Enter size of array\n");
  scanf("%d",&n);
  int ar[n];
  printf("Enter  array elements \n");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&ar[i]);
  }
int val;
  printf("Enter value to search :- ");
  scanf("%d",&val);
 int m= search(ar,n,0,n,val);
if(m==1)
   return 0;
}
