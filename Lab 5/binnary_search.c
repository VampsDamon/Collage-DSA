#include<stdio.h>
void sort(int arr[],int n)
{
    int i,j,min;
    for ( i = 0; i < n; i++)
    {
        min=i;
        for ( j = i+1; j < n; j++)
        {
            if(arr[j]<arr[min])
              min=j;
        }
        if(min!=i)
        {
           int temp=arr[i];
           arr[i]=arr[min];
           arr[min]=temp;
        }   
    }
}
int b_search(int arr[],int n,int s)
{
    int l=0,u=n,mid;
  while (l<=u)
  {
     mid=(l+u)/2;
     if(arr[mid]==s)
      return 1;
     else if(arr[mid]<s)
      l=mid+1;
     else
      u=mid-1;  
  }
  return 0;
  
}
int main()
{
int n,s;
printf("Enter size of arrays :- ");
scanf("%d",&n);
int arr[n];
printf("Enter  arrays elements :- ");
for (int i = 0; i < n; i++)
{
    scanf("%d",&arr[i]);
}
printf(" Element to Sorted order :-\n");
sort(arr,n);
for (int i = 0; i < n; i++)
{
    printf("%d\t",arr[i]);
}
printf("\n");
printf("Enter element to Search :- ");
scanf("%d",&s);
int pos=b_search(arr,n,s);
if(pos==1)
printf("Element %d is  present\n",s);
else
printf("%d is not present\n",s);
return 0;
}