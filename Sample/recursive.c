#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
#include "main.h"
/**
 * puts2 - prints a string, followed by a new line,
 * @str: pointer to the string to print
 * Return: void
*/
void _puts_recursion(char *s)
{
int i = 0;

while (s[i] != '\0')
{
	if (i % 2 == 0)
	{
		_puts_recursion(s[i]);
	}

	i++;
}
_puts_recursion('\n');
}
int main(void)
{
    _puts_recursion("Puts with recursion");
    return (0);
}
