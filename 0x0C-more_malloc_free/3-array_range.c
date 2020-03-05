#include <stdio.h>
#include <stdlib.h>
/**
 *array_range - function that creates an array of integers
 *@min:number of less range
 *@max:number of greater range
 *
 * Return: Always 0 (Success)
 */
int *array_range(int min, int max)
{
	int i, rg, *m;

	if (min > max)
	{
		return ('\0');
	}
	rg = (max - min) + 1;
	m = malloc(rg * sizeof(int));
	if (m == '\0')
		return ('\0');
	for (i = 0; i < rg; i++)
	{
		m[i] = min;
		min++;
	}
	return (m);
}
