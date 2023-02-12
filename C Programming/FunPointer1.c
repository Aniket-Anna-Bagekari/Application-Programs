#include<stdio.h>

void fun(int a, int b)
{
  int c = 0;
  c = a+b;
  printf("%d\n",c);
}

int main()
{
  int a = 10;
  int b = 11;
  void(*p)(int,int);
  p = fun;
  p(a,b);

  return 0;
}
