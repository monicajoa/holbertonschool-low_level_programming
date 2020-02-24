#include "holberton.h"
/**
 *_strchr - function that locates a character in a string.
 *@s:the pointer with the locatation of the string
 *@c:the character to find in the string
 *
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int index;
	int j;

	index = 0;
	while (s[index] != '\0')
	{
		index++;
	}
	j = 0;
	while (j <= index)
	{
		if (s[j] == c)
		{
			return (s + j);
		}
		else if (s[j] == '\0')
		{
			s = '\0';
		}
		j++;
	}
	return (s);
}
