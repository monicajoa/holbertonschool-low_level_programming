#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98.
 * @n: int where to star the count
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
	int cont;

	if (n > 98)
	{
		for (cont = n; cont >= 98; cont--)
		{
			if (cont == 98)
			printf("%d", cont);
			else
			printf("%d ,", cont);
		}
		putchar('\n');
	}
	else if (n < 98)
	{
		for (cont = n; cont <= 98; cont++)
		{
			if (cont == 98)
			printf("%d", cont);
			else
			printf("%d ,", cont);
		}
		putchar('\n');
	}
	else
	printf("%d\n", n);
}
