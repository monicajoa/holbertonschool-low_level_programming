#include "holberton.h"
/**
 *rot13- function that encodes a string using rot13.
 *@s: variable that save string
 * Return: Always 0 (Success)
 */
char *rot13(char *s)
{
	int i;
	int j;
	char l1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char l2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (l1[j] != '\0')
		{
			if (s[i] == l1[j])
			{
				s[i] = l2[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
