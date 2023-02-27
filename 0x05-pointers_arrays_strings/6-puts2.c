#include "main.h"

/**
 * puts2-a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: TThe pointer variable
 *
 * Return: 0 if successful
 * student: Adewale
 */
void puts2(char *str)
{
	int len = 0;
	int strlen = 0;

	while (str[len] != '\0')
		len++;
	len -= 1;
	for (; len <= strlen; len += 2)
		_putchar(str[strlen]);
	_putchar('\n');
}
