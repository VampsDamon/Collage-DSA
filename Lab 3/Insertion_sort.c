#include<stdio.h>
int main()
{
int n,i,j;
printf("Enter size of arrays :- ");
scanf("%d",&n);
int arr[n];
printf("Enter  arrays elements :- ");
for (int i = 0; i < n; i++)
{
    scanf("%d",&arr[i]);
}
for (  i = 1; i < n; i++)
{
    int temp=arr[i];
    for ( j = i-1;j>=0; j--)
    {
        if (temp<arr[j])
        {
            arr[j+1]=arr[j]; 
        }
        else
        break;
    }
        arr[j+1]=temp;      
    
}
printf(" Array in sorted array :-\n ");
for (int i = 0; i < n; i++)
{
    printf("%d\t",arr[i]);
}
return 0;
}