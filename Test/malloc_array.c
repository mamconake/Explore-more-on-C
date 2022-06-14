#include <stdio.h>
#include <stdlib.h>
/**
 ** main - memory allocation on arrays
 ** Return : Always 0.
 **/
int main(void)
{
  int i = 0;
  int n = 21;
  int *array = malloc(sizeof(int) *n);

  for (i = 0; i<n; i++)
   array[i]=i*2;
  
  for (i = 0; i< n; i++)
    printf("%d\n", array[i]);
  
  free(array);

  return (0);
}


