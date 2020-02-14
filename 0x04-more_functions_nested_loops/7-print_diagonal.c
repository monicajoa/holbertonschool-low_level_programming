#include "holberton.h"
/**
 * print_diagonal -  function that draws a diagonal line on the terminal
 * @n: variable checks the number of times the character
 *
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int x;
	int y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= n; x++)
		{
			for (y = 1; y < x; y++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
