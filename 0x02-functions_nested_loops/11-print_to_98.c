#include "main.h"
/**
 * print_to_98- A program that prints natural numbers
 * @n: The argument of the function
 *
 * Return: void
 * student: Adewale
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		for (n = 0; n <= 98; n++)
		{
			printf("%d", n);
			if (n == 98)
				continue;
			_putchar(',');
		}
		_putchar('\n');
	}
	else
	{
		for (n = 0; n >= 98; n--)
		{
			printf("%d", n);
		if (n == 98)
			continue;
		_putchar(',');
		}
	_putchar('\n');
	}
}
