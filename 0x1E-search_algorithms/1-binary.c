#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, idx = 0, middle = 0;
	size_t right = size - 1;

	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		printf("Searching in array: ");
		for (idx = left; idx < right; idx++)
			printf("%d, ", array[idx]);
		printf("%d\n", array[idx]);
		middle = (left + right) / 2;
		if (value == array[middle])
			return (middle);
		else if (value > array[middle])
			left = middle + 1;
		else if (value < array[middle])
			right = middle - 1;
	}
	return (-1);
}
