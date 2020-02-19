#include "holberton.h"
#include <stdio.h>
/**
 *print_array - function that prints n elements of an array of integers
 *@a: array with the characters
 *@n: number of elements of the array to be printed
 *
 * Return: Always 0 (Success)
 */
void print_array(int *a, int n)
{
	int cont;

	cont = 0;
	while (cont < n)
	{
		if (cont != (n - 1))
		{
			printf("%d, ", a[cont]);
		}
		else
		{
			printf("%d", a[cont]);
		}
	cont++;
	}
	putchar('\n');
}
