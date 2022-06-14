#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#include "mathTest.h"//static library
/**
 ** main - takes a random number and evaluates the sum and the difference
 ** Return : Always 0.
 **/
int main()
{
  //needed to create a random number
  time_t t;
  srand((unsigned) time(&t));
  int rNuma = rand();
  int rNumb = rand();

  int answer;

  answer = addNumbers(rNuma, rNumb);
  printf("%d + %d = %d\n", rNuma, rNumb, answer);

  answer = subNumbers(rNuma, rNumb);
  printf("%d - %d = %d\n", rNuma, rNumb, answer);

  return (0);
}
