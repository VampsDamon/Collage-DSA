#include<stdio.h>
int main()
{
  int nz=0,i,j,m,n;
  printf("Enter size of row and column :- ");
  scanf("%d%d",&n,&m);
  int arr[n][m];
  printf("Enter array elements :- ");
    for( i=0;i<n;i++){
      for( j=0;j<m;j++)
       scanf("%d",&arr[i][j]);
    if(arr[i][j]!=0)
      nz++;
}
int nzz[n][2];
int k=0;
for( i=0;i<n;i++){
      for( j=0;j<k;j++)
  if(arr[i][j]!=0)
{
  if(k<n)
{
  nzz[k][0]=arr[i][j];
  nzz[k][1]=i;
  nzz[k][2]=j;
  k++;
}  
}

}
printf(" Array elements in rows order :- \n");
    for( i=0;i<k;i++){
      for( j=0;j<3;j++)
       printf("%d\t",nzz[i][j]);
     printf("\n");
}

return 0;
}
