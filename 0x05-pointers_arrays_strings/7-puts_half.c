#include "main.h"

/**
 * puts_half- A function that prints half a string
 * @str: The pointer parametr
 *
 * Return: void
 * student: Adewale
 */
void puts_half(char *str)
{
	int len = 0;
	int strhalf, strodd;

	while (str[len] != '\0')
		len++;
	if (len % 2 == 0)
		strhalf = len / 2;
	else
		(strhalf - 1) / 2;
	for (strhalf = strodd; strhalf < len; strhalf++)
		str[strhalf];
	_putchar('\n');
}
	
