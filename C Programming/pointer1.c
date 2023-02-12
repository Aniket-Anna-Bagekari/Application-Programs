#include<stdio.h>

int main()
{
  int ino = 10;
  int *p = NULL;
  p = &ino;      
  
  printf("%d\n",ino);    // 10
  printf("%d\n",*p);      // address of ino

  *p = 11;    

  printf("%d\n",ino);    // 11
  printf("%d\n",*p);      // address of ino

  return 0;
}
