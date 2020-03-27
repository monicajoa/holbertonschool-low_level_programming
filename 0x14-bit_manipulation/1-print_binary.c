#include "holberton.h"
/**
 *binary_number - converts, binary to decimal
 *@n: number to represent in binary
 *
 *Return: void
 */
void binary_number(unsigned long int n)
{
	char bn;

	if (n == 0)
	{
		return;
	}
	binary_number(n >> 1);
	bn = ((n & 1) + '0');
	_putchar(bn);
}
/**
 *print_binary - prints the binary representation of a number
 *@n: int to represent in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		binary_number(n);
	}
}
