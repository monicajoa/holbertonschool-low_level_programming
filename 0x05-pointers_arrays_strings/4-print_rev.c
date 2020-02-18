#include "holberton.h"
/**
 *print_rev - function that prints a string, in reverse
 *@s: variable save string
 *
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
	int i = 0;
	int index;

	while (s[i])
	{
		i++;
	}
	index = i - 1;
	while (index >= 0)
	{
		_putchar(s[index]);
		index--;
	}
	_putchar('\n');
}
