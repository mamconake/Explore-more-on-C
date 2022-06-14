#include <stdio.h>
#include <stdlib.h>
/**
 ** main - concatinating strings and assigning enough memory
 ** Return: Always 0.
 **/
int main(void)
{
  char *str_1 = "hello";
  char *str_2 = "world";
  int len  = 0, i = 0, k = 0;
  char *s = NULL;
  
  /*compute the length of str_1 & str_2*/
  while (str_1[i] != '\0')
    i++;
  len += i;

  i = 0;
  while (str_2[i] != '\0')
    i++;
  len += 1;
  /*allocate enough memory space for str_1 + str_2*/
  s = malloc(sizeof(char)* (len + 1));

  if(s != NULL)
  {
    i = 0;
    while (str_1[k] != '\0')
    {
      s[i] = str_1[k];
      i++;
      k++;
    }

    k = 0;
    while(str_2[k] != '\0')
    {
      s[i] = str_2[k];
      i++;
      k++;
    }
    s[i] = '\0';

    printf("%s\n", s);
  free(s);
  }
  return (0);
}
