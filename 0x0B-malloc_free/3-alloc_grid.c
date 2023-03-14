#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of
 *               integers with each element initalized to 0.
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 *
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 *         Otherwise - a pointer to the 2-dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	char **twoDimensionArray;
	int arrayHeight, arrayWidth;

	if (height <= 0 || width <= 0)
		return (NULL);
	for (arrayHeight = 0; arrayHeight < height; arrayHeight++)
	{
		twoDimensionArray[arrayHeight] = malloc(sizeof(int) * width);
		if (twoDimensionArray[arrayHeight] == NULL)
		{
			for (; arrayHeight >= 0; arrayHeight--)
				free(twoDimensionArray);
			free(twoDimensionArray);
			return (NULL);
		}
	}
	for (arrayHeight = 0; arrayHeight < height; arrayHeight++)
	{
		for (arrayWidth = 0; arrayWidth < width; arrayWidth++)
			twoDimensionArray[arrayWidth] = 0;
	}
	return (twoDimensionArray);
}
