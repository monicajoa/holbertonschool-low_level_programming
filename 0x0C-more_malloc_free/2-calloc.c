#include <stdio.h>
#include <stdlib.h>
/**
 *_calloc - function that allocates memory for an array, using malloc
 *@nmemb:number of data spaces
 *@size: size of each data space
 *
 * Return: Always 0 (Success)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *m;

	if (nmemb == 0 || size == 0)
		return ('\0');
	m = malloc(nmemb * size);
	if (m == '\0')
		return ('\0');
	for (i = 0; i < (nmemb * size); i++)
	{
		m[i] = 0;
	}
	return (m);
}
