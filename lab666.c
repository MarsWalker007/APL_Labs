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

void pamagiti (int n, int a[], int b0, int b1)
{
    for (int i = 0; i < n; i++)
    {
            if (a[i] > 0)
                b0++;
            else
                b1++;
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
    int a[n], b1, b0;
    b0 = 0;
    b1 = 0;
    fill(n, a);
    printmas(n, a);
    pamagiti(n, a, b0, b1);
    printf("Кол-во положительных чисел- %d; Кол-во отрицательных- %d \n ", b0, b1);
    int plus[b0], minus[b1];
    check(n, a, plus, minus);
    printmas(b0, plus);
    printf("\n");
    printmas(b1, minus);
    return 0;
}
