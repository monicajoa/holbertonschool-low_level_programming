#include "holberton.h"
/**
 *jack_bauer-function that prints minutes of the day, from 00:00 to 23:59
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int h;
	int m;
	int uh;
	int um;
	int dh;
	int dm;

	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			uh = h % 10;
			um = m % 10;
			dh = h / 10;
			dm = m / 10;
			_putchar(dh + '0');
			_putchar(uh + '0');
			_putchar(':');
			_putchar(dm + '0');
			_putchar(um + '0');
			_putchar('\n');
		}
	}
}
