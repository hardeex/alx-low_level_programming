#include <stdio.h>

/**
 * main- A function that prints its name, followed by a new line
 * @argc: The argument that counts the variables
 * @argv: The argument that stores the argrc
 * Return: 0 if successful
 * Student: Adewale
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
		return (0);
	}
}
