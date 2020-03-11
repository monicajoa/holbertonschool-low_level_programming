#include <stdio.h>
#include "function_pointers.h"
/**
 *int_index - function that searches for an integer
 *@array: array of integers
 *@size: is the number of elements in the array
 *@cmp: pointer to the function to be used to compare values
 *
 * Return: Always 0 (Success)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == '\0' || cmp == '\0')
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i <= size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
