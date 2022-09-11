#include<stdio.h>
int main()
{
int arr[2][3];
printf("Enter Arrays Elements :-- ");
for (int  i = 0; i < 2; i++)
{
    for(int j=0;j<3;j++)
      scanf("%d",&arr[i][j]);
}
printf(" Arrays Elements rows order :--\n ");
for (int  i = 0; i < 2; i++)
{
    for(int j=0;j<3;j++)
    printf("%d\t",arr[i][j]);
    printf("\n");
}
int b=0,I,J,add,LR=0,LC=0;
printf("Enter Index of Array to find it's Address :- ");
scanf("%d%d",&I,&J);
add=b+(sizeof(arr[0][0])*(I-LR)*2)+(J+LC);
printf("Address of %d is :-- %d\n",arr[I][J],add);

printf(" Arrays Elements column order :--\n ");
for (int  i = 0; i < 3; i++)
{
    for(int j=0;j<2;j++)
    printf("%d\t",arr[j][i]);
    printf("\n");
}

return 0;
}