#include "holberton.h"
/**
 *print_sign - function that prints the sign of a number
 *@n: variable to check sign of a number
 *
 * Return: Always 0 (Success)
 */

int print_sign(int n)
{
	int d;

	if (n > 0)
	{
		d = 1;
		_putchar(43);
	}
	else if (n == 0)
	{
		d = 0;
		_putchar(48);
	}
	else
	{
		d = -1;
		_putchar(45);
	}
	return (d);
}
