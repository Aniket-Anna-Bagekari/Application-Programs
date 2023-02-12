#include<stdio.h>

void sun(float a, double b)
{
  printf("%f\n",a);
  printf("%lf\n",b);
}

int main()
{
  float a = 10.9;
  double b = 10.99;

  void(*p)(float,double);
  p = sun;
  p(a,b);

  return 0;
}
