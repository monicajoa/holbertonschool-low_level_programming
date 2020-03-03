#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - creates an array of chars, that fills  with a char
 *@size: size of array.
 *@c:the character of the array.
 *
 * Return: Always 0 (Success)
 */
char *create_array(unsigned int size, char c)
{
	char *m;
	unsigned int i;

	if (size == 0)
	{
		return ('\0');
	}
	m = malloc(size * sizeof(char));
	if (m == '\0')
	{
		return ('\0');
	}
	for (i = 0; i < size; i++)
	{
		m[i] = c;
	}
	return (m);
}
