#include "holberton.h"
#include <stdlib.h>
/**
 *_strdup -  returns a pointer to a newly allocated space in memory
 *@str: duplicate of the string
 *
 * Return: Always 0 (Success)
 */
char *_strdup(char *str)
{

	int i;
	int a;
	char *m;

	if (str == '\0')
	{
		return ('\0');
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	m = malloc(i * sizeof(char));
	if (m == '\0')
	{
		return ('\0');
	}
	for (a = 0; a < i; a++)
	{
		m[a] = str[a];
	}
	return (m);
}
