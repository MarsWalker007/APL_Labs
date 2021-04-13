#include <stdio.h>
#include <math.h>
int main()
{
    double x;
    printf("Enter x { 8.98 <= x <= 9.26 } -> ");
    scanf("%lf", &x);
    if (x >= 8.98 && x <= 9.26)
    {
        double y = acos(2.0 * sin(x));
        double z = sqrt(cos(y * y));
        printf("y(x) = %lf\nz(y) = %lf\n", y, z);
    }
    else
        printf("x value is incorrect!\n");
    return 0;
}
