#include "main.h"

/**
 * print_diagonal- A function that drwas diagonal line
 * @n: The number of times the line is printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int diagonal, space;

	if (n > 0)
	{
		for (diagonal = 0; diagonal < n; diagonal++)
		{
			for (space = 0; space < diagonal; space++)
				_putchar(' ');
			_putchar('\\');

			if (diagonal == n - 1)
				continue;
			_putchar('\n');
		}
	}
		_putchar('\n');
	}

