#include<stdio.h>

int gun(int a, char b)
{
  printf("%d\n",a);
  printf("%c\n",b);
}

int main()
{
  int a = 10;
  char b = 'A';

  int(*p)(int,char);
  p = gun;
  p(a,b);

  return 0;
}
