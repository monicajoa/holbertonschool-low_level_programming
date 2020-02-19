#include "holberton.h"
#include <stdio.h>
/**
 *_strcpy - function that copies the string pointed
 *@dest: pointer where text will be paste
 *@src: array with the string to copy
 *
 * Return: Always 0 (Success)
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int index;

	while (src[i])
	{
		i++;
	}
	for (index = 0; index <= i; index++)
	{
		dest[index] = src[index];
	}
	return (dest);
}
