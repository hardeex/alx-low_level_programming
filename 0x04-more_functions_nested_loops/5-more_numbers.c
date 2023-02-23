#include "main.h"

/**
 * more_numbers- Print number 14 times
 *
 * Return: void
 */
void more_numbers(void)
{
	int num;
	int count = 0;

	while (count <= 10)
	{
		for (num = 0; num <= 14; num++)
			_putchar((num % 10) + '0');
		count++;
		_putchar('\n');
	}
}
