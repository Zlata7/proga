/**
    «аполнение матрицы числами натурального р€да
*/
void doob(int **a, int m, int n)
{
    int i;
    for( i = 0; i < m; i++)
    {
        int j;
        for( j = 0; j < n; j++)
            a[i][j]=i*n+j;
    }
    return ;
}
