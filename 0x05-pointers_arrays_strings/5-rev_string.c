#include "main.h"

/**
 * rev_string- A function that reverses a string
 * @s: The pointer variable
 *
 * Return: void
 * student: Adewale
 */
void rev_string(char *s)
{
	int strlen = 0;
	int revlen = 0;
	char txt;

	while (s[strlen] != '\0')
		strlen++;
	
	while ( revlen < strlen--)
	{
		txt = s[revlen];
		s[revlen++) = s[strlen];
		s[strlen] = txt;
	}
}
