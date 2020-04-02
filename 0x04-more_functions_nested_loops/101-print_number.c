#include "holberton.h"
/**
 *print_number - function that print a integer or digit
 *@num: numbers
 *
 * Return: number of characters printed
 */
void print_number(int num)
{
	int j = 0, aux;
	int factor = 1;

	if (num == 0)
	{
		_putchar('0');
	}
	if (num < 0)
	{
		num = num * (-1);
		_putchar('-');
		j++;
	}
	aux = num;
	j = 0;
	while (aux)
	{
		aux = aux / 10;
		factor = factor * 10;
	}
	while (factor > 1)
	{
		factor = factor / 10;
		_putchar((num / factor) + '0');
		num = num % factor;
		j++;
	}
}
