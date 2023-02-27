#include "main.h"

/**
 * swap_int- A function that swaps the values of two integers
 * @a: The first pointer variable argument
 * @b: The second pointer variable argument
 *
 * Return: void
 * Student: Adewale
 */
void swap_int(int *a, int *b)
{
	int value;

	value = *a;
	*a = *b;
	*b = value;
}
