#include "holberton.h"
/**
 *string_toupper -function changes lowercase letters of a string to uppercase.
 *@s: variable that save string
 * Return: Always 0 (Success)
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] <= 122 && s[i] >= 97)
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
