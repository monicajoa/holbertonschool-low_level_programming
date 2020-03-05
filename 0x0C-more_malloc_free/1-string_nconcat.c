#include <stdio.h>
#include <stdlib.h>
/**
 *string_nconcat - function that concatenates two strings
 *@s1:string number one that contain "Holberton"
 *@s2:string number two that contain "School"
 *
 * Return: Always 0 (Success)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, a, b, c;
	char *m;

	if (s1 == '\0')
		s1 = "";
	if (s2 == '\0')
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
		i++;
	j = 0;
	while (s2[j] != '\0')
		j++;
	if (n > j)
	{
		n = j;
	}
	m = malloc(((i + n) * sizeof(int) + 1));
	if (m == '\0')
		return ('\0');
	for (a = 0; a < i; a++)
	{
		m[a] = s1[a];
	}
	c = 0;
	for (b = i; b < (i + n); b++)
	{
		m[b] = s2[c];
		c++;
	}
	m[b] = '\0';
	return (m);
}
