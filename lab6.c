#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill(int n, int a[])
{
    int i;
    for (i = 0; i < n; i++)
        a[i] = rand() % 101 - 50;
}

void printmas(int n, int a[])
{
    for(int i = 0; i < n; i++)
        printf("%4d", a[i]);
    printf(" \n");
}

void pamagiti (int n, int a[], int b[])
{
    for (int i = 0; i < n; i++)
    {
            if (a[i] > 0)
                b[0]++;
            else
                b[1]++;
    }
}
void check(int n, int a[], int plus[], int minus[])
{
    int one = 0, two = 0;
    for(int i = 0; i < n; i++)
    {
        if (a[i] > 0)
          plus[one++] = a[i];
        if (a[i] < 0)
          minus[two++] = a[i];
    }
}
int main()
{
    int n = 0;
    printf("Размер массива -> ");
    scanf("%d", &n);
    int a[n], b[2];
    b[0] = 0;
    b[1] = 0;
    fill(n, a);
    printmas(n, a);
    pamagiti(n, a, b);
    printf("One = %d; Two = %d \n ", b[0], b[1]);
    int plus[b[0]], minus[b[1]];
    check(n, a, plus, minus);
    printmas(b[0], plus);
    printf("\n");
    printmas(b[1], minus);
    return 0;
}
