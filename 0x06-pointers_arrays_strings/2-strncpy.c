#include "holberton.h"
/**
 *_strncpy - function that copies a string
 *@dest:variable with string s1
 *@src:variable with string s2
 *@n:number bytes from src
 *
 * Return: Always 0 (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int cont_src = 0;

	while (cont_src < n && src[cont_src] != '\0')
	{
		dest[cont_src] = src[cont_src];
		cont_src++;
	}
	while (cont_src < n)
	{
		dest[cont_src] = 0;
		cont_src++;
	}
	return (dest);
}
