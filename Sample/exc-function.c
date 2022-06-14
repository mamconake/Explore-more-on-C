#include <stdio.h>
/**
 **modif_mu_char- set the
 ** Return 
 **/
void modif_my_char_var(char *cc, char ccc)
{
  *cc= 'o';
  ccc= '1';
}
/**
 ** main- how to change the value of variable from outside the function
 ** it is declared in, using a  pointer.
 ** Return: Always 0.
 **/
int main(void)
{
  char c;
  char *p;
  p= &c;
  c= 'H';
  printf("Value of 'c' before call: %d ('%c')\n", c, c);
  printf("Address of 'c': %p\n", &c);
  printf("Value of 'p': %p\n", p);
  printf("Address of 'p': %p\n", &p);
  modif_my_char_var(p, c);
  printf("Value of 'c' after the call: %d ('%c')\n", c, c);
return (0);
}

