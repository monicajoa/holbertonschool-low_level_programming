#include "holberton.h"
/**
 * print_triangle -  function that prints a triangle
 * @size: variable to set the size of the triangle
 *
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
	int x, y;
	int limit = size;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= size; x++)
		{
			for (y = limit; y >= 1; y--)
			{
				if (x == y)
				{
					_putchar('#');
				}
				else if (y < x)
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
