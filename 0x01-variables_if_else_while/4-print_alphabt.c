#include <stdio.h>

/**
 * main- A function that prints aplhabet in lowercase
 * in another style and conditions
 *
 * Return: 0 if successful
 * Author: Adewale
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	putchar('\n');
	return (0);
}
