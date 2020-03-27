#include "holberton.h"
/**
 *clear_bit - sets the value of a bit to 0 at a given index
 *@n: decimal number
 *@index: is the index, starting from 0 of the bit you want to set
 *
 * Return: the value in the index position or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int b = 1;

	if (index > (sizeof(n) * 8) - 1)
	{
		return (-1);
	}
	b = b << index;
	*n = (*n & ~b);
	return (1);
}
