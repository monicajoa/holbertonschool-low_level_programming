#include "holberton.h"
/**
 *_memcpy - function that copies memory area.
 *@dest:the pointer with the address of the area
 *@src:variable character constant
 *@n: bytes from memory area
 *
 * Return: Always 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	index = 0;
	while (index < n)
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
