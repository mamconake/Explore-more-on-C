#include<stdio.h>
/*
 * main - prints Fibonacci series upto n number of terms
 *
 * Return: 0
 */
int main(void)
{
int a, b, result, i, n;
  a = 0;
  b = 1;
  for(i = 0; a <= n; i ++)
  {
    printf("%d\n", a);
    result = a + b;
    a = b;
    b = result;
  }
}
