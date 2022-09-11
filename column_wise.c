//Address of arrays in column major
#include<stdio.h>
int main()
{
  int n,m,I,J,i,j;
  printf("Enter size of row and column :- ");
  scanf("%d%d",&n,&m);
  int arr[n][m];
  printf("Enter array elements :- ");
    for( i=0;i<n;i++)
      for( j=0;j<m;j++)
       scanf("%d",&arr[i][j]);
printf(" Array elements in column order :- \n");
    for( j=0;j<m;j++){
      for(i=0;i<n;i++)
       printf("%d\t",arr[i][j]);
     printf("\n");
}

  printf("Enter index of Number to find it's address :-");
  scanf("%d%d",&I,&J);
int add,b=0,lr=0,lc=0;
add=b+sizeof(arr[0][0])*((I-lr) + (J-lc)*n);
  printf("Address of array :- %d \n",add);
  return 0;
}