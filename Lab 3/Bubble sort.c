#include<stdio.h>
int main()
{
int n,i;
printf("Enter size of arrays :- ");
scanf("%d",&n);
int arr[n];
printf("Enter  arrays elements :- ");
int m=n;
for (int i = 0; i < n; i++)
{
    scanf("%d",&arr[i]);
}

while(m!=0){
    int check=0;
for (int i = 0; i < m; i++)
{
    if(arr[i]>arr[i+1])
    {
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        check++;
    }
}
if(check==0)
break;
m--;
}
printf(" Array in sorted array :-\n ");
for (int i = 0; i < n; i++)
{
    printf("%d\t",arr[i]);
}


return 0;
}
