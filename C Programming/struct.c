#include<stdio.h>

struct Demo
{
  int no;
  float f;
  int k;
};
struct Demo arr[3];      // we cant create element of structure outside the structure //

int main()
{
  struct Demo obj;
 
  printf("%d\n",sizeof(obj));

  return 0;
}