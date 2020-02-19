#include "holberton.h"
/**
 *puts_half - function that prints half of a string
 *@str: array with the characters
 *
 * Return: Always 0 (Success)
 */
void puts_half(char *str)
{
	int i = 0;
	int index;
	int n;

	while (str[i])
	{
		i++;
	}
	index = i - 1;
	n = (index / 2) + 1;
	while (n <= index)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
