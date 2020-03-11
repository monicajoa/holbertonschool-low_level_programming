#include <stdlib.h>
#include "function_pointers.h"
/**
 *array_iterator - exe function given as parameter on each element on a array
 *@array: pointer with the array
 *@size: size of the array
 *@action:the pointer to the function to use
 *
 * Return: Always 0 (Success)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == '\0' || array == '\0')
	{
		return;
	}
	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
