#include <stdio.h>
/*
 * main - prints all the arguments, without using ac
 * @ac: number of commandline arguments
 * @av: array of commandline argumnets
 * Return: 0.
 */
int main(int ac, char **av)
{
  int i = 0;
  
  for(i = 0; av[i] !=NULL; i++)
    printf("%s\n", av[i]);
  return 0;
}

