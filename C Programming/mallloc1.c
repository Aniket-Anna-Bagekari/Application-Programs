#include<stdio.h>
#include<stdlib.h>

int main()
{
  int Arr[5];    // Static memory allocation

  int *p = NULL;

  p = (int *)malloc(sizeof(int) * 5);

  // Use the Memory

  free(p);

  // code

  return 0;     // Memory of Arr gets Deallocate at this point
}
