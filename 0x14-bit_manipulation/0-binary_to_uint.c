#include "holberton.h"
/**
 *binary_to_uint - function that converts a binary number to an int
 *@b: pointing to a string of 0 and 1 chars
 *
 * Return: the converted number from binary code
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j, aux = 0, sum = 0;

	if (b == NULL)
		return (0);
	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		i++;
	}
	i = i - 1;
	j = 0;
	while (b[j] != '\0')
	{
		aux = b[j] - '0';
		aux = aux << i;
		sum = sum + aux;
		i--;
		j++;
	}
	return (sum);
}
