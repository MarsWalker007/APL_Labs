#include <stdio.h>
#include <math.h>
int main ()
{
  float x,y,z;
  printf("Enter x -> ");
  scanf("%f", &x);
  printf("Enter y -> ");
  scanf("%f", &y);
  printf("Enter z -> ");
  scanf("%f", &z);
 if(x>y+z)
  {
  printf("%f",x);
  }
 if(y>x+z)
  {
  printf("%f",y);
  }
 if(z>y+x)
  {
  printf("%f",z);
  }
}
