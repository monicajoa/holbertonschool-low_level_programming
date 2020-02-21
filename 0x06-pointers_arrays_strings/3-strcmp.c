#include "holberton.h"
/**
 *_strcmp - function that compares two strings.
 *@s1:variable save string number 1
 *@s2:variable save string number 2
 *
 * Return: Always 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int result = 0;

	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	result = s1[i] - s2[i];
	return (result);
}
