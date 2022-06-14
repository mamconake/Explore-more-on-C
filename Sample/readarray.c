#include <stdio.h>
/**
 ** main - 
 ** Return: Always 0.
 **/
int main(void)
{
  int a[5],i;
  for(i=0; i<5;i++)
    scanf("%d", &a[i]);
  for(i=0;i<5;i++)
    printf("\n array element at index %d is : %d" ,i,a[i]);
  return (0);
}
