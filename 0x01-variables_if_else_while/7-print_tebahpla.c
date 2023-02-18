#include <stdio.h>

/**
 * main- A program that writes alphabet in reverse
 *
 * Return: 0 if successful
 * Author: Adewale
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);
	putchar('\n');
	return (0);
}
