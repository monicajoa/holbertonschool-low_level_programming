#include "holberton.h"
/**
 *reverse_array - function that reverses the content of an array of integers.
 *@a:variable save string
 *@n:is the number of elements of the array
 *
 * Return: Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp_i;
	int cont_a = 0;

	while (cont_a < (n - 1))
	{
		cont_a++;
	}
	for (i = 0; i < cont_a; i++)
	{
		temp_i = a[i];
		a[i] = a[cont_a];
		a[cont_a] = temp_i;
		cont_a--;
	}
}
