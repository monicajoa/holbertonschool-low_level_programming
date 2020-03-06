#include <stdio.h>
#include <stdlib.h>
/**
 *_realloc - function that reallocates a memory block using malloc and free
 *@ptr: pointer to the memory previously allocated with a call to malloc
 *@old_size:is the size, in bytes, of the allocated space for ptr
 *@new_size:is the new size, in bytes of the new memory block
 *
 * Return: Always 0 (Success)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, j;
	char *n, *o;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != '\0')
	{
		free(ptr);
		return ('\0');
	}
	if (ptr == '\0')
	{
		n = malloc(new_size);
		return (n);
	}
	o = ptr;
	if (new_size < old_size)
	{
		n = malloc(new_size);
		for (i = 0; i < new_size; i++)
			n[i] = o[i];
	}
	if (new_size > old_size)
	{
		n = malloc(new_size);
		for (j = 0; j < old_size; j++)
			n[j] = o[j];
	}
	free(ptr);
	return (n);
}
