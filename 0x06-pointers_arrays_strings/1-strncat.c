#include "holberton.h"
/**
 *_strncat - function that concatenates two strings
 *@dest:variable with string s1
 *@src:variable with string s2
 *@n:number bytes from src
 *
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int index_dest;
	int index_src = 0;
	int cont_dest = 0;
	int cont_src = 0;

	while (dest[cont_dest] != '\0')
	{
		cont_dest++;
	}
	while (src[cont_src] != '\0' && cont_src < n)
	{
		cont_src++;
	}
	index_dest = cont_dest;
	while (index_dest < cont_dest + cont_src)
	{
		dest[index_dest] = src[index_src];
		index_dest++;
		index_src++;
	}
	return (dest);
}
