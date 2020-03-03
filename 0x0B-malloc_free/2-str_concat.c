#include <stdio.h>
#include <stdlib.h>
/**
 *str_concat - function that concatenates two strings
 *@s1: array number 1
 *@s2:array number 2
 *
 * Return: Always 0 (Success)
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, a, b, n;
	char *m;

	if (s1 == '\0')
		s1 = "";
	if (s2 == '\0')
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}
	m = malloc(((i + j) * sizeof(char)) + 1);
	for (a = 0; a < i ; a++)
	{
		m[a] = s1[a];
	}
	n = 0;
	for (b = i; b <= (i + j); b++)
	{
		m[b] = s2[n];
		n++;
	}
	return (m);
}
