#include <stdio.h>
#include <stdlib.h>
/**
 ** main - command line arguments -(argc, argv)
 ** Return : Always 0.
 **/
int main(int argc, char **argv)
{
  int i = 0;
  int sum = 0;

  for(i = 1; i < argc; i++)
    sum += atoi(argv[i]);
  {
    printf("%d\n", sum);
  }
  return (sum);
}
