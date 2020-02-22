#include "holberton.h"
/**
 *leet- function that encodes a string into 1337
 *@s: variable that save string
 * Return: Always 0 (Success)
 */
char *leet(char *s)
{
	int i;
	int j;
	char lc[] = {'a', 'e', 'o', 't', 'l'};
	char up[] = {'A', 'E', 'O', 'T', 'L'};
	char n[] = {'4', '3', '0', '7', '1'};

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (j <= 4)
		{
			if (s[i] == lc[j] || s[i] == up[j])
			{
				s[i] = n[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
