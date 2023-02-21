#include "main.h"

/**
 * main- A program that prints alphabet in lowercase 
 * using _putchar and prototype header file
 *
 * Return: void
 * Author: Adewale
 */
void print_alphabet(void)
{
	char letter;

	for(letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');

	
}
