#include "holberton.h"
/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14 10
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int times;
	int n;
	int un;
	int dn;

	for (times = 0; times <= 9; times++)
	{
		for (n = 0; n <= 14; n++)
		{
			un = n % 10;
			dn = n / 10;
			if (n >= 10)
			{
				_putchar(dn + '0');
			}
			_putchar(un + '0');
		}
		_putchar('\n');
	}
}
