#include "main.h"
/**
 * print_square- A function that prints square
 * @size: The length of the square
 *
 * Return: The size of the square
 */
void print_square(int size)
{
	int height, width;

	if (size > 0)
	{
		for (height = 0; height < size; height++)
		{
			for (width = 0; width < size; width++)
				_putchar('#');

			if (height == size - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
