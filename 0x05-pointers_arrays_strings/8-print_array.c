#include "main.h"
#include <stdio.h>

/**
 * print_array- A function that prints n element
 * of a array of integers, followed by a new line.
 * @a: The first pointer variable
 * @n: The numver of element of the array to be printed
 *
 * Return: void
 * Student: Adewale
 */
void print_array(int *a, int n)
{
	int num = 0;

	for (; num < n; num++)
	{
		printf("%d", a[num]);
		if (num < n - 1)
			printf(", ");
	}
	putchar('\n');
}
