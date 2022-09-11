#include<stdio.h>
int main()
{
int nz = 0, i, j, m, n,z=0;
    printf("Enter size of row and column :- ");
    scanf("%d%d", &n, &m);
    int arr[n][m];
    printf("Enter array elements :- ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++){
            scanf("%d", &arr[i][j]);
        if (arr[i][j] != 0)
            nz++;
        else
          z++;    
        }
    }
    if(((m*n)/2)<z)
     printf("Sparse matrix\n");
    else
      printf("Not Sparse matrix\n"); 
return 0;
}
