#include<stdio.h>
int main()
{
int n,neg=0,pos=0,zero=0;
printf("Enter array size :- ");
scanf("%d",&n);
int ar[n];
printf("Enter array elements :- ");
for (int i = 0; i < n; i++)
{
    scanf("%d",&ar[i]);
    if(ar[i]==0)
      zero++;
    else if(ar[i]>0)
     pos++;
    else
     neg++;   
}
printf("Number of Zeros :-- %d\n",zero);
printf("Number of Positive num. :-- %d\n",pos);
printf("Number of Negative num. :-- %d\n",neg);
return 0;
}