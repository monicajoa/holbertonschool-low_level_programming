#include "holberton.h"
#include <stdio.h>
/**
 * print_times_table - prints the n times table
 * @n:table to print
 *
 * Return: Always 0.
 */
void print_times_table(int n)
{
	int i, j, udad, dna, cna;
	int prod = 0;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			prod = i * j;
			udad = prod % 10;
			dna = prod % 100 / 10;
			cna = prod / 100;
			if (cna == 0 && j != 0)
			{
				_putchar(' ');
				if (dna == 0)
				{
					_putchar(' ');
				}
				else
				{
					_putchar(dna + '0');
				}
			}
			else if (cna != 0)
			{
				_putchar(cna + '0');
				_putchar(dna + '0');
			}
			_putchar(udad + '0');
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
