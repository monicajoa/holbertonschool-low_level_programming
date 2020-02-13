#include "holberton.h"
/**
 *_isupper - function that checks for uppercase character
 *@c:  variable ascci code uppercase character
 *
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	int n;

	if (c >= 65 && c <= 90)
	{
		n = 1;
	}
	else
	{
		n = 0;
	}
	return (n);
}
