#include<stdio.h>
int main()
{
int m,n,i,j;
printf("Enter rows and columns of Matrix :- ");
scanf("%d%d",&m,&n);
int a[m][n];
int b[m][n];
int sum[m][n];
printf("Enter  elements of Matrix 1:- ");
for ( i = 0; i < m; i++)
  for(j=0;j<n;j++ )
    scanf("%d",&a[i][j]);
printf("Enter  elements of Matrix 2:- ");
for ( i = 0; i < m; i++)
  for(j=0;j<n;j++ )
    scanf("%d",&b[i][j]);
printf("Sum of Matrix:- \n");
for ( i = 0; i < m; i++){
  for(j=0;j<n;j++ ){
    sum[i][j]=a[i][j]+b[i][j];
    printf("%d\t",sum[i][j]);
  }
printf("\n");
}    
return 0;
}
