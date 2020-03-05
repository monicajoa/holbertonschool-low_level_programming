#include <stdio.h>
#include <stdlib.h>
/**
 *malloc_checked - function that allocates memory using malloc.
 *@b:size of the memory space requested.
 *
 * Return: Always 0 (Success)
 */
void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);
	if (m == '\0')
	{
		exit(98);
	}
	return (m);
}
