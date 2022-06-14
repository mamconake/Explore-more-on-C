#include <stdio.h>
#include <string.h>
/**
 ** main -  string concatination
 ** Return: 0.
 **/
int main(void)
{
  int len1, len2, i;
  char s1[20] = "naftali";
  char s2[6] = "korir";
  len1 = strlen (s1);
  len2 = strlen (s2);
  
  for(i = 0; i <= len2; i++)
  {
    s1[len1 + i] = s2[i];
  }
  printf("%s\n", s1);

  return (0);
}
    
