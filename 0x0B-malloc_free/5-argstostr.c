#include <stdio.h>
#include <stdlib.h>
/**
 *argstostr -  concatenates all the arguments of the program.
 *@ac:num of arrays in the av array
 *@av: pointer with the 2 dimensional array of chars
 *
 * Return: Always 0 (Success)
 */
char *argstostr(int ac, char **av)
{
	int i, j, l = 0, size = 0, x, y, index;
	char *m;

	if (ac == 0 || av == '\0')
		return ('\0');
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			l++;
		}
	}
	size = l + ac + 1;
	m = malloc(size * sizeof(char));
	if (m == '\0')
		return ('\0');
	index = 0;
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			m[index] = av[x][y];
			index++;
		}
		m[index] = '\n';
		index++;
	}
	m[index] = '\0';
	return (m);
}
