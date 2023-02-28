#include "main.h"

/**
 * _strcpy - A funcion that copies strings
 * @dest: The return value
 * @src: The variable to copy to
 *
 * Return: dest if successful
 * Student: Adewale
 */
char *_strcpy(char *dest, char *src)
{
	int cpy = 0;

	while (src[cpy])
	{
		dest[cpy] = src[cpy];
		cpy++;
	}
	return (dest);
}
