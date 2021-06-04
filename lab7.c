#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void fill (int n, int m, int a[n][m])
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            a[i][j] = rand() % 101 - 50;
    }
}

void kazah (int n, int m, int A[][m])
{
    for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j = 0; j < m; j++)
            printf("%4d", A[i][j]);
    }
    printf("\n");
}
void uzbek (int n, int m, int A[][m], int O[])
{
    for (int j = 0; j < m; j++)
    {
        int max = -50;
        for (int i = 0; i < n; i++)
        {
            if (A[i][j] > max)
                max = A[i][j];
            O[j] = max;
        }
        printf("%4d", O[j]);
    }
    printf("\n");
}
void kirgiz (int n, int m, int A[][m], int O[])
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
    int A[n][m], O[m];
    fill(n, m, A);
    kazah(n, m, A);
    printf("\n");
    uzbek(n, m, A, O);
    kirgiz(n, m, A, O);
    printf("\n");
    return 0;
}
