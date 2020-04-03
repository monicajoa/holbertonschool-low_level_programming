#include "holberton.h"
/**
 *print_number - function that print a integer or digit
 *@num: numbers
 *
 * Return: number of characters printed
 */
void print_number(int num)
{
	unsigned int aux;

	if (num < 0)
	{
		_putchar('-');
		num = num * (-1);
	}
	aux = num;
	if ((aux / 10) > 0)
	{
		print_number(aux / 10);
	}
	_putchar((aux % 10) + '0');
}
