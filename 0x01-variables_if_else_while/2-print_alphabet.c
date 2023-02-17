#include <stdio.h>

/**
 * main- A program that prints alphabet in lowecase
 *
 * Return: 0 if successful
 */

int main(void)
{
	char alphabet;

	for (alphabet='a'; alphabet <= 'z'; alphabet++)
	putchar(alphabet);
	putchar('\n');

	return (0);
}
