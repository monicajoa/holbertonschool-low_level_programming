#include "holberton.h"
/**
 *_strlen - function that returns the length of a string
 *@*s: variable save word "holberton" string
 *
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int i = 0;
	char l = s[0];

	while (l)
	{
		i++;
		l= s[i];
	}
	return (i);
}
