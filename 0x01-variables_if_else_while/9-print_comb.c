#include <stdio.h>

/**
 * main- A program that prints all possible
 * combinations of single-digits numbers using putchar
 *
 * Return: 0 if successful
 * Author: Adewale
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		putchar((digit % 10) + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
