#include "main.h"
/**
 * _isalpha- A program that checks for alphabetic char
 * @c- The function argument
 *
 * Return: 1 if successful and 0 otherwise
 * student: Adewale
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
