#include "holberton.h"
/**
 *_strspn - function that gets the length of a prefix
 *@s:the pointer with the address of the area
 *@accept:
 *
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	int index_1;
	int index_2;
	int cont = 0;
	int temp = 0;

	index_1 = 0;
	while (s[index_1] != '\0')
	{
		temp = cont;
		index_2 = 0;
		while (accept[index_2] != '\0')
		{
			if (s[index_1] == accept[index_2])
			{
				cont = cont + 1;
			}
		index_2++;
		}
		if (temp == cont)
		{
			return (cont);
		}
	index_1++;
	}
	return (cont);
}
