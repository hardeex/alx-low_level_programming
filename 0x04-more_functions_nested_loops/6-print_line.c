#include "main.h"

/**
 * print_line- A function that drwas a straiight line
 * @n: The argument
 *
 * Return: 0
 */
void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
			_putchar('_');
	}
	_putchar('\n');
}

