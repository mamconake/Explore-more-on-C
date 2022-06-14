#include <stdio.h>
#include <stdlib.h>
/**
 ** main - memory allocation in c
 ** Return : Always 0.
 **/
int main(void)
{
  int a;

  int *p = (int *)malloc(sizeof(int));

  *p = 182;
  printf("%d\n", *p);
  free(p);

  return (0);
}
