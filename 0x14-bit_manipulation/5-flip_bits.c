#include "holberton.h"
/**
 *flip_bits - returns the number of bits
 *@n: decimal number 1
 *@m: decimal number 2
 *
 * Return: number of bits to get another number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int aux;
	unsigned int b;

	aux = n ^ m;
	b = 0;
	while (aux != 0)
	{
		if ((aux & 1) == 1)
		{
			b++;
		}
		aux = aux >> 1;
	}
	return (b);
}
