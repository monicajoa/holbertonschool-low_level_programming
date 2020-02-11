#include "holberton.h"
/**
 *print_last_digit - function that computes the absolute value of an integer
 *@ld: variable to check absolute value of an integer
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int ld)
{
	int n;
	int x;

	n = ld % 10;
	if (n > 0)
	{
		x = n;
		_putchar(x + '0');
	}
	else if (n < 0)
	{
		x = n * (-1);
		_putchar(x + '0');
	}
	else
	{
		x = n;
		_putchar(x + '0');
	}
	return (x);
}
