#include "holberton.h"
/**
 *_memset - function that fills memory with a constant byte
 *@s:the pointer with the address of the area
 *@b:variable character constant
 *@n: bytes from memory area
 *
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
