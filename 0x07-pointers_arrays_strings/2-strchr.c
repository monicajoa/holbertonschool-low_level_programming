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

	index = 0;
	while (s[index] != '\0')
	{
		if (s[index] == c || s[index] == '\0')
		{
			return (s + index);
		}
		index++;
	}
	return (s + index);
}
