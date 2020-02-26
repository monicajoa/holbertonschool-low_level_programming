#include "holberton.h"
/**
 *_puts_recursion - function that prints a string
 *@s:pointer with the address of the first position of the string
 *
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	int i;

	i = 0;

	if (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
		_puts_recursion(&s[i]);
	}
	else
	{
		_putchar('\n');
	}
}
