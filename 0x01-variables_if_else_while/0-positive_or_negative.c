#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main- A program that generates positive, negative and zero
 * value from a random number
 * Return postive if n > 0
 * Return 0 if n=0
 * Return negative if n < 0
 * Return: 0 if successful
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero", n);
	return (0);
}
