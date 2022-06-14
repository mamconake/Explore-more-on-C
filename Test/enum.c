#include <stdio.h>
/* main - Defining enum data types
 * Return: 0;
 */
int main(void)
{
  enum languages {human = 100, animal = 50, computer};
  enum days {SUN, MON, TUE, WED, THU, FRI, SAT};
  printf("human: %d, animals: %d, computer: %d\n", human, animal, computer);
  printf("SUN: %d\n", SUN);
  printf("MON: %d\n", MON);
  printf("TUE: %d\n", TUE);
  printf("WED: %d\n", WED);
  printf("THU: %d\n", THU);
  printf("FRI: %d\n", FRI);
  printf("SAT: %d\n", SAT);
  return (0);
}
