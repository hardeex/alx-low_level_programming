#include "main.h"

/**
 * _strcat- A function that concatenate two strings
 * @dest: The pointer variables
 * @src: The appends
 *
 * Return: dest if successful
 * student: Adewale
 */
char *_strcat(char *dest, char *src)
{
	chae *tmp = dest;

	while (*tmp)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (tmp);
}
