#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void fill(int n, int a[])
{
    int i;
    for (i = 0; i < n; i++)
        a[i] = rand() % 101 - 50;
}
int main()
{
    srand(time(NULL));
    int n, sone, stwo; // sone - положительные stwo - отрицательные
    sone = 0;
    stwo = 0;
    printf("n -> ");
    scanf("%d", &n);
    int A[n];
    fill(n, A);
    int i;
    for (i = 0; i < n; i++)
        printf("%4d", A[i]);
    int O[sone], OO[stwo];
    sone = 0;
    stwo = 0;
    for (i = 0; i < n; i++)
    {
        if (A[i] >= 0)
        {
            O[sone] = A[i];
            sone++;
        }
        else
        {
            OO[stwo] = A[i];
            stwo++;
        }
    }
    printf("\n");
    for (i = 0; i < sone; i++)
    {
        printf("%4d", O[i]);
    }
    printf("\n");
    for (i = 0; i < stwo; i++)
    {
        printf("%4d", OO[i]);
    }
    return (0);
}
