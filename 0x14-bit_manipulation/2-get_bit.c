#include "holberton.h"
/**
 *get_bit - returns the value of a bit at a given index
 *@n: decimal number
 *@index: is the index, starting from 0 of the bit you want to get
 *
 * Return: the value in the index position or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long aux;

	if (index > (sizeof(n) * 8) - 1)
	{
		return (-1);
	}
	aux = n >> index;
	return (aux & 1);
}
