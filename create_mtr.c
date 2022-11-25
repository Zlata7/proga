#include <stdio.h>
#include <stdlib.h>

void create_mtr()
{
    int m, n;
    printf("\n\n\t¬ведите размеры массива: ");
    scanf("%d%d", &m, &n);
    int *arr[n];
///    void doob(int **a, int, int);
     int i;
        for(i=0; i<m; i++) arr[i] = (int*)malloc(n*sizeof(int));

///    doob(arr, m, n);
{
    for( i = 0; i < m; i++)
    {
        int j;
        for( j = 0; j < n; j++)
            arr[i][j]=i*n+j;
    }
}
    for(i=0; i<m; i++)
    {
        printf("\n");
        int j;
        for(j=0; j<n; j++)
            printf(" %3d", arr[i][j]);
    }
    printf("\n");
    return;
}
