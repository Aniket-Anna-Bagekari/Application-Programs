#include<stdio.h>
#include<stdlib.h>

int main()
{
  int *p = NULL;
  int *q = NULL;

  p = (int *)malloc(10 * sizeof(int));

  // Use the Memory

  q = (int *)realloc(p, 15 * sizeof(int));
  if(q == NULL)
  {
    printf("Realloc Falls");
    q = p;
  }
  // Use the Memory

  free(q);

  return 0;
}
