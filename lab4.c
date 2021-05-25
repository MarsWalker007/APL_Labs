#include <stdio.h>
#include <math.h>
double func(double x)
{
  if (x >= 0.0 && x <= 0.25)
    return exp(sin(x));
  else
    return exp(x) - (1/sqrt(x));
}
int main()
{
    double f, h, x, sum, sum2 = 1, e, del = 0;
	  int i, n = 4;
	  printf("Введите точность -> e:\n");
	  scanf ("%le", &e);
	  printf("\tx\t f(x)\n");
	  printf("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n");
	  do
	  {
	      for (i = 0; i < n; i++)
	      {
		        h = 0.5 / n;
		        x = (i * h + (h /0.5));
	          f = func(x);
		        sum += f;
	      }
	      printf("Количество- > %d\n", n);
	      sum = sum * h;
	      del = fabs(sum2 - sum) / 3.0;
	      sum2 = sum;
	      n = 2 * n;
	      printf("Сумма -> %.10lf\n", sum);
	      printf("Деление -> %lf\n", del);
	  }
	  while (del > e);
	  return 0;
}
