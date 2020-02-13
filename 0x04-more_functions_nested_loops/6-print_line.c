#include "holberton.h"
/**
 * print_line - function that draws a straight line in the terminal
 * @n: variable checks the number of times the character
 *
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int line;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (line = 1; line <= n; line++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
