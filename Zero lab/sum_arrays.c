#include<stdio.h>
int main()
{
int n,sum=0;
printf("Enter array size :- ");
scanf("%d",&n);
int ar[n];
printf("Enter array elements :- ");
for (int i = 0; i < n; i++)
{
    scanf("%d",&ar[i]);
    sum=sum+ar[i];
}
printf("Sum of array elements :- %d\n",sum);
return 0;
}