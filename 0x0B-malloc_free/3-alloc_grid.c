#include "holberton.h"
#include <stdlib.h>
/**
 *alloc_grid - returns a pointer to a 2 dimensional array of integers
 *@width:array with width
 *@height:array with height
 *
 * Return: Always 0 (Success)
 */
int **alloc_grid(int width, int height)
{
	int **m;
	int i, j, x, y;

	m = malloc(height * sizeof(int *));
	if (m == '\0')
		return ('\0');
	for (i = 0; i < height; i++)
	{
		m[i] = malloc(width * sizeof(int));
		if (m[i] == '\0')
		{
			for (j = 0; j < height; j++)
			{
				free(m[j]);
			}
			free(m);
			return ('\0');
		}
	}
	for (y = 0; y < height; y++)
	{
		for (x = 0; x < width; x++)
		{
			m[y][x] = 0;
		}
	}
	return (m);
}
