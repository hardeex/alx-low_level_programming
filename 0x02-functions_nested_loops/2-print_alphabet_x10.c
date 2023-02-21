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
	char alphabet;
	int count = 0;

	while (count < 10)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
			count++;
			_putchar('\n');
		}
	}
}
