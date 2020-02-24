#include "holberton.h"
/**
 *_strpbrk - function that searches a string for any of a set of bytes
 *@s:the string to check
 *@accept:letters to accept and
 *
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int index_1;
	int index_2;
	int n;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	index_1 = 0;
	while (index_1 <= n)
	{
		index_2 = 0;
		while (accept[index_2] != '\0')
		{
			if (s[index_1] == accept[index_2])
			{
				return (s + index_1);
			}
		index_2++;
		}
	index_1++;
	}
	s = '\0';
	return (s);
}
