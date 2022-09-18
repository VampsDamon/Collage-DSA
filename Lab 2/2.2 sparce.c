#include <stdio.h>
int main()
{
    int nz = 0, i, j, m, n;
    int k = -1;
    printf("Enter size of row and column :- ");
    scanf("%d%d", &n, &m);
    int arr[n][m];
    printf("Enter array elements :- ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++){
            scanf("%d", &arr[i][j]);
        if (arr[i][j] != 0)
            nz++;}
    }
    printf("nz=%d",nz);
    int nzz[nz][3];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (arr[i][j] != 0)
            {
                k++;
                nzz[k][0] = i;
                nzz[k][1] = j;
                nzz[k][2] = arr[i][j];
                
            }
            
        }
    }
    printf(" Elements of sparse Matrix :- \n");
    printf("Rows  Columns  Elements\n");
    for (i = 0; i <= k; i++)
    {
        for (j = 0; j < 3; j++)
            printf(" %d   \t", nzz[i][j]);
        printf("\n");
    }

    return 0;
}
