#include <stdio.h>

/**
 * main- A program that prints base ten using putchar
 *
 * Return: 0 if successful
 * Author: Adewale
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num ++)
		putchar((num % 10) + '0');
	putchar('\n');

	return (0);
}
