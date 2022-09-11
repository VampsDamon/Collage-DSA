//Address of 1-D Matrix
#include<stdio.h>
int main()
{
int n,sum=0;
printf("Enter array size :- ");
scanf("%d",&n);
int ar[n];
printf("Enter array elements :- ");
for (int i = 0; i < n; i++)
    scanf("%d",&ar[i]);
int add,b=0,s,I,bi=0;
printf("Enter element to it's Address :-- ");
scanf("%d", &s);
for (int i = 0; i < n; i++)
{
    if(ar[i]==s)
    {
        I=i;
        break;
    }
}
add=b+ (sizeof(ar[0])*(bi+I));
printf("Address of %d is :- %d\n",ar[I],add);
return 0;
}
