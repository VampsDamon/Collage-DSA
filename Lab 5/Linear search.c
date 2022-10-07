#include<stdio.h>
int main()
{
int n,i,s;
printf("Enter size of arrays :- ");
scanf("%d",&n);
int arr[n];
printf("Enter  arrays elements :- ");
for (int i = 0; i < n; i++)
{
    scanf("%d",&arr[i]);
}
printf("Enter element to Search :- ");
scanf("%d",&s);
int check=0;
for (  i = 0; i < n; i++)
{
    if(s==arr[i])
    {
        check=1;
        break;
    }
}
if(check==1)
printf("%d is Present at %d \n",s,i+1);
else
printf("%d is not present \n",s);
return 0;
}
