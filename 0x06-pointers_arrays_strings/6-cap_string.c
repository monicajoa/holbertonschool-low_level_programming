#include "holberton.h"
/**
 *cap_string - function that capitalizes all words of a string.
 *@s1: variable that save string
 * Return: Always 0 (Success)
 */
char *cap_string(char *s1)
{
	int i;
	int j;
	char s2[] = {' ', 9, 10, ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	if (s1[0] <= 'z' && s1[0] >= 'a')
		s1[0] = s1[0] - 32;
	i = 1;
	while (s1[i] != '\0')
	{
		j = 0;
		while (s2[j] != '\0')
		{
			if (s1[i] == s2[j] && s1[i + 1] <= 'z' && s1[i + 1] >= 'a')
			{
				s1[i + 1] = s1[i + 1] - 32;
			}
			j++;
		}
		i++;
	}
	return (s1);
}
