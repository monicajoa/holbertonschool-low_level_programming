#include "holberton.h"
/**
 *_islower - checks for lowercase character
 *@c: Number ascii lowercase character
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	int n;

	if (c <= 122 && c >= 97)
	{
		n = 1;
	}
	else
		n = 0;
	return (n);
}
