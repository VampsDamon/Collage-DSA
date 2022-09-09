#include<stdio.h>
int main()
{
  int n,m,z=0,nz=0,i,j;
  printf("Enter size of row and column :- ");
  scanf("%d%d",&n,&m);
  int arr[n][m];
  printf("Enter array elements :- ");
    for( i=0;i<n;i++){
      for( j=0;j<m;j++)
       scanf("%d",&arr[i][j]);
    if(arr[i][j]==0)
      z++;
    else
     nz++;

}
printf(" Array elements in rows order :- \n");
    for( i=0;i<n;i++){
      for( j=0;j<m;j++)
       printf("%d\t",arr[i][j]);
     printf("\n");
}
if((n-nz)>=((m*n)/2))
printf("Matrix is SPARSE\n");
else
printf("Matrix is not SPARSE\n");
return 0;
}
