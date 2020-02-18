#include "holberton.h"
/**
 *rev_string - function that prints a string, in reverse
 *@s: variable save string
 *
 * Return: Always 0 (Success)
 */
void rev_string(char *s)
{
	int i = 0;
	int index;
	int index2 = 0;
	char temp;

	while (s[i])
	{
		i++;
	}
	index = i - 1;
	while (index2 < index)
	{
		temp = s[index2];
		s[index2] = s[index];
		s[index] = temp;
		index2++;
		index--;
	}
}
