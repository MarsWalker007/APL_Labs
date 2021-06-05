#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void fill(int n, int m, int **a)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            a[i][j] = rand() % 101 - 50;
    }
}

void mew(int n, int m, int **A)
{
    for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j = 0; j < m; j++)
            printf("%4d", A[i][j]);
    }
    printf("\n");
}
void slon(int n, int m, int **A, int *O)
{
    for (int j = 0; j < m; j++)
    {
        int max = -50;
        for (int i = 0; i < n; i++)
        {
            if (A[i][j] > max)
                max = A[i][j];   //нашли максимум в каждом столбце
            O[j] = max;
        }
        printf("%4d", O[j]);
    }
    printf("\n");
}
void salam(int n, int m, int **A, int *O)
{
    int min = 50;
    for (int i = 0; i < m; i++)
    {
        if (O[i] < min)
            min = O[i];
    }
    printf("\n");
    printf("%d", min);
}
int main()
{
    srand(time(NULL));
    int n, m;
    printf("n -> ");
    scanf("%d", &n);
    printf("m -> ");
    scanf("%d", &m);
    int **A = (int **)malloc(n * sizeof(int *));
    if (!A)
    {
      printf("Memory alloaction error!\n");
      exit(EXIT_FAILURE);
    }
    for (int i = 0; i < n; i++)
    {
        A[i] = malloc(m * sizeof(int));
        if (!A[i])
        {
          printf("Memory alloaction error!\n");
          exit(EXIT_FAILURE);
        }
    }
    int *O = (int *) malloc (m *sizeof(int));
    fill(n, m, A);
    mew(n, m, A);
    printf("\n");
    slon(n, m, A, O);
    salam(n, m, A, O);
    printf("\n");
    for(int i = 0; i < n; i++)
        free(A[i]);
    free(A);
    return 0;
}
