#include "holberton.h"
/**
 *_strcat - function that concatenates two strings
 *@dest:variable with string s1
 *@src:variable with string s2
 *
 * Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	int index_dest;
	int index_src = 0;
	int cont_dest = 0;
	int cont_src = 0;

	while (dest[cont_dest])
	{
		cont_dest++;
	}
	while (src[cont_src])
	{
		cont_src++;
	}
	index_dest = cont_dest;
	while (index_dest <= cont_dest + cont_src)
	{
		dest[index_dest] = src[index_src];
		index_dest++;
		index_src++;
	}
	return (dest);
}
