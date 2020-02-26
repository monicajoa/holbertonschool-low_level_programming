#include "holberton.h"
/**
 *_print_rev_recursion - function that prints a string in reverse.
 *@s:pointer with the address of the first position of the string
 *
 * Return: Always 0 (Success)
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		i++;
	}
	else
	{
		return;
	}
	_print_rev_recursion(&s[i]);
	i = i - 1;
	_putchar(s[i]);
}
