#include <stdio.h>
#include <math.h>
int main()
{
    double f, x, h, q;
    int s = 0;
    printf("Введите шаг -> h:");
    scanf("%lf", &h);
    printf("\tx\t f(x)\n");
    printf("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n");
    q = 0.5 / h;
    do
    {
        x = s * h;
        if (x >= 0.0 && x <= 0.25)
            f = exp(sin(x));
        else
            f = exp(x) - (1.0 / (sqrt(x)));
        printf ("\tx%.8lf f(x)%.8lf\n", x, f);
        s++;
    }
    while(s <= q);
    return 0;
}
