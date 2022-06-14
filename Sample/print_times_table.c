#include <stdio.h>
void print_times_table(void);
int main(void)
{
  print_times_table();
  return (0);
}
/*
 * print_times_table - prints a 9 times table
 */
void print_times_table(void)
{
  int i, j, n;
  for(i = 0; i < 10; i++)
  {
    for(j = 0; j < 10; j++)
    {
      n = i * j;
      if (j != 0)
      {
        putchar(',');
        putchar(' ');
      }
      /*prints 2 digit number*/
      if (n > 9)
      {
        putchar((n / 10) + '0');
        putchar((n % 10) + '0');
      }
      else if(n > 0)
      {
        putchar(' ');
        putchar(n + '0');
      }
      else
      {
        putchar(n + '0');
      }
    }
    putchar('\n');
  }
}
