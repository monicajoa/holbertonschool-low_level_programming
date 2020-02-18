#include "holberton.h"
/**
 *swap_int - function that swaps the values of two integers
 *@a: path of int 1
 *@b: path of int 2
 *
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int num_a;
	int num_b;

	num_a = *a;
	num_b = *b;
	*a = num_b;
	*b = num_a;
}
