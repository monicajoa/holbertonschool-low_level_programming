#include "holberton.h"
/**
 *_puts- function that prints a string
 *@str: variable save string
 *
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	int i = 0;
	char l = str[0];

	while (l)
	{
		l = str[i];
		i++;
		_putchar(l);
	}
	_putchar('\n');
}
