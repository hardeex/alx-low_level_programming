#include "main.h"

/**
 * _strlen- A function that returns the length of a string
 * @s: The pointer variable
 *
 * Return: 0 if successful
 * Student: Adewale
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '0')
		len++;
	printf(len);
}
