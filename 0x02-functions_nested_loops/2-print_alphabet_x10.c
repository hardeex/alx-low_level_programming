#include "main.h"

/**
 * print_alphabet- A program that prints alphabet in lowercase
 * using _putchar and prototype header file
 *
 * Return: void
 * Author: Adewale
 */
void print_alphabet(void)
{
	char i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
