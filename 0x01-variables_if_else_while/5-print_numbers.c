#include <stdio.h>

/**
 * main- A program that prints single digits
 *
 * Return: 0 if successful
 * Author: Adewale
 */

int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
		printf("%d", number);
	printf("\n");

	return (0);
}

