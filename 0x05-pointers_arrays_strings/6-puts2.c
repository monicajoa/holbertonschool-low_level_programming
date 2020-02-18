#include "holberton.h"
/**
 *puts2 - function that returns the length of a string
 *@str: variable save word "holberton" string
 *
 * Return: Always 0 (Success)
 */
void puts2(char *str)
{
	int i = 0;
	int index;
	int cont;
	int mod;

	while (str[i])
	{
		i++;
	}
	index = i - 1;
	cont = 0;
	while (cont <= index)
	{
		mod = cont % 2;
		if (mod == 0)
		{
			_putchar(str[cont]);
		}
		cont++;
	}
	_putchar('\n');
}
