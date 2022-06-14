#include <stdio.h>
void print_alpha(void);
void print_alpha_x10(void);
int _islower(char c);
int _isupper(char c);
int _isalpha(char c);
void print_sign(int n);
int _abs(int n);
int last_digit(int n);
void countdown(void);
void print_minute(int m);
void print_times_table(void);
/*
 * main - functions
 *
 * Return:0
 */
int main(void)
{
 //print_alpha();
 // print_alpha_x10();
 /* char c = 'P';
  if(_isalpha(c))
    printf("%c is an alphabet\n", c);
  else
    printf("%c is not an alphabet\n", c);*/
  /*int n = -1;
  print_sign(n);
  return (0);*/
 /* int n = -1202;
  printf(" The absolute value of %d is %d\n", n, _abs(n));*/
 /* int n = -289;
  printf("The last digit of the %d is %d\n", n, last_digit(n));
  return (0);*/
 /* countdown();*/
  print_times_table();
  return (0);
}
/*
 * print_alpha - prints alphabets in lowercase
 */
void print_alpha(void)
{
  int c;
  for(c= 97; c<= (97 + 25); c++)
    putchar(c);
  putchar('\n');
}
/*
 * print_alpha_10 - prints alpabets in lowercase 10 times
 */
void print_alpha_x10(void)
{
  int i;
  for(i= 0; i<10; i++)
    print_alpha();
}
/*
 * _islower - checks whether a given character is in lowercase
 * @c: character
 *
 * Return: 1 if c is lowercase, 0 therwise
 */
int _islower(char c)
{
  if(c>= 'a' && c<= 'z')
    return (1);
  else
    return (0);
}
/*
 * _isupper - checks whether a given character is upercase
 * @c: character
 *
 * Return: 1 c is upercase, otherwise 0
 */
int _isupper(char c)
{
  if(c >= 'A' && c <= 'Z')
    return (1);
  else
    return (0);
}
/*
 * _isalpha - checks whether the given character is alphabetic
 * @c: Character
 *
 * Return: 1 if c is an alphabet, 0 otherwise
 */
int _isalpha(char c)
{
  if(_islower(c) || _isupper(c))
    return (1);
  else
    return (0);
}
/*
 * print_sign - prints the sign of a given integer
 * @n: integer
 */
void print_sign(int n)
{
  if(n > 0)
    putchar('+');
  else if(n < 0)
    putchar('-');
  else
    putchar('0');

  putchar('\n');
}
/*
 * _abs - computes the absolute value of an integer
 * @n: integer
 *
 * Return: absolute value of n
 */
int _abs(int n)
{
  if(n < 0)
    return (n * -1);
  else
    return (n);
}
/*
 * last_digit - gets the last digit of a given number
 * @n: integer
 * 
 * Return: last digit of n
 */
int last_digit( int n)
{
  return (_abs(n % 10));
}
/*
 * countdown - count down all minutes of the day from 0 t   to 1440
 */
void countdown(void)
{
  int i;
  for(i = 0; i < (60 * 24); i++)
  {
    print_minute(i);
  }
}
/*
 * print_minute - prints a given minute
 * @m: integer between 0 and 1440
 */
void print_minute(int m)
{
  int hour = m / 60;
  int minute = m % 60;

  /*print hour*/
  putchar((hour / 10) + '0');
  putchar((hour % 10) + '0');

  /*print the separator : */
  putchar (':');
  /*print minute*/
  putchar((minute / 10) + '0');
  putchar((minute % 10) + '0');

  putchar('\n');
}
/*
 * print_times_table - prints the 9 times table, startin   starting with 0
 */
void print_times_table(void)
{
  int i, j, n;
  for (i = 0; i < 10; i++)
  {
    for (j=0; j < 10; i++)
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
    /*prints 1 digit number*/
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
