#include "holberton.h"
/**
 * print_alphabet_x10 -  Function that print alphabet lowercase 10 times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int n;
	char lc;

	for (n = 0; n <= 9; n++)
	{
		for (lc = 'a'; lc <= 'z'; lc++)
		{
			_putchar(lc);
		}
		_putchar('\n');
	}
}
