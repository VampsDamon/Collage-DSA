#include<stdio.h>
int main()
{
int n,i,j,min;
printf("Enter size of arrays :- ");
scanf("%d",&n);
int arr[n];
printf("Enter  arrays elements :- ");
for (int i = 0; i < n; i++)
{
    scanf("%d",&arr[i]);
}
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
printf(" Array in sorted array :-\n ");
for (int i = 0; i < n; i++)
{
    printf("%d\t",arr[i]);
}
return 0;
}
