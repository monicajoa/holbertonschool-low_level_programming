#include "holberton.h"
/**
 *_isalpha - checks for alphabetic character
 *@c: Number ascii lowercase or uppercase character
 *
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	int n;

	if (c <= 122 && c >= 97)
	{
		n = 1;
	}
	else if (c <= 90 && c >= 65)
	{
		n = 1;
	}
	else
	{
		n = 0;
	}
	return (n);
}
