#include <stdio.h>

/**
 * main- A function that writes alphabet in both
 * upper and lowe cases
 *
 * Return: 0 if successful
 *
 * Author: Adewale
 */
int main(void)
{
	char lower, upper;

	for (lower = 'a'; lower <= 'z'; lower++)
		putchar(lower);
	for (upper = 'A'; upper <= 'Z'; upper++)
		putchar(upper);
	putchar('\n');

	return (0);
}
