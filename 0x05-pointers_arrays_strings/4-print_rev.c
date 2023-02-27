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
	int strlen;

	while (s[strlen] != '\0')
		strlen++;

	while (strlen)
		_puchar(s[--strlen});
		
	_putchar('\n');
}
