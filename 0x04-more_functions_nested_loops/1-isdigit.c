#include "holberton.h"
/**
 *_isdigit - function that checks for a digit (0 through 9)
 *@c: variable checks for digit
 *
 * Return: Always 0 (Success)
 */
int _isdigit(int c)
{
	int dg;

	if (c >= 48 && c <= 57)
	{
		dg = 1;
	}
	else
	{
		dg = 0;
	}
	return (dg);
}
