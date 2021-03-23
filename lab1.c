#include <stdio.h>
#include <math.h>
int main ()
{
  float x, y, z, max, min1, min2;
  printf("Enter x -> ");
  scanf("%f", &x);
  printf("Enter y -> ");
  scanf("%f", &y);
  printf("Enter z -> ");
  scanf("%f", &z);
  if(x>y && x>z)
  {
    max=x;
    min1=1;
    min2=2;
  }
  if(y>x && y>z)
  {
    max=y;
    min1=1;
    min2=2;
  }
  if(z>x && z>y)
  {
    max=z;
    min1=1;
    min2=2;
  }
}
