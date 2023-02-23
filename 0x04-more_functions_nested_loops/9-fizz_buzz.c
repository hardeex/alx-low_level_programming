#include <stdio.h>

/**
 * main- A program that print 1 to 100
 * print Fizz for multiples of 3
 * print Buzz for the multiples of 5
 * print FizzBuzz for the multiples of 3 and 5
 *
 * Return: 0 if successful
 *
 * Author: Adewale
 */
int main(void)
{
	int digit;

	for (digit = 0; digit <= 100; digit++)
	{
		if ((digit % 3) == 0 && (digit % 5) == 0)
			printf("FizzBuzz");
		else if ((digit % 3) == 0)
			printf("Fizz");
		else if ((digit % 5) == 0)
			printf("Buzz");
		else
			printf("%d", digit);
		if (digit == 100)
			continue;
		printf(" ");
	}
	printf("\n");
	return (0);
}
