#include<stdio.h>
int main()
{
int m,n,i,j;
printf("Enter rows and columns of Matrix :- ");
scanf("%d%d",&m,&n);
int a[m][n];
int b[m][n];
printf("Enter  elements of Matrix :- ");
for ( i = 0; i < m; i++)
  for(j=0;j<n;j++ )
    scanf("%d",&a[i][j]);
printf("Transpose of Matrix:- \n");
for ( i = 0; i < n; i++){
  for(j=0;j<m;j++ ){
    b[i][j]=a[j][i];
    printf("%d\t",b[i][j]);
  }
printf("\n");
}    

return 0;
}