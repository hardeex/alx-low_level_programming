#include <stdio.h>

/**
 * main- A program that prints base 16 numbers
 *
 * Return: 0 if successful
 */
int main(void)
{
	char letter;
	int number;

	for (number = 0; number <= 9; number++)
		putchar((number % 10) + '0');
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');

	return (0);
}
