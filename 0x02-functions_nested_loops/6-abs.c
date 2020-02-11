#include "holberton.h"
/**
 *_abs - function that computes the absolute value of an integer
 *@d: variable to check absolute value of an integer
 *
 * Return: Always 0 (Success)
 */

int _abs(int d)
{
	int n;

	if (d > 0)
	{
		n = d;
	}
	else if (d < 0)
	{
		n = d * (-1);
	}
	else
	{
		n = d;
	}
	return (n);
}
