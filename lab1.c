#include <stdio.h>
#include <math.h>
int main ()
{
    float x,y,z,max,min,min1;
    printf("Enter x -> ");
    scanf("%f", &x);
    printf("Enter y -> ");
    scanf("%f", &y);
    printf("Enter z -> ");
    scanf("%f", &z);
    if (x>y && x>z)
    {
        max=x;
        min=y;
        min1=z;
    }
    if (y>x && y>z)
    {
        max=y;
        min=x;
        min1=z;
    }
    if (z>x && z>y)
    {
        max=z;
        min=x;
        min1=y;
    }
    {
        if (max>min+min1)
            printf("%f",max);
        else
            printf("%f\n",(min+min1)-max);
    }
    return 0;
  }
