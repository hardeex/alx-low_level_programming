#include "main.h"

/**
 * print_rev- A function that prints a string in reverse
 * @s: The pointer variable
 *
 * Return: void
 * student: Adewale
 */
void print_rev(char *s)
{
	int strlen = 0;

	while (s[strlen] != '\0')
		strlen++;

	while (strlen)
		_putchar(s[--strlen]);
	_putchar('\n');
}
