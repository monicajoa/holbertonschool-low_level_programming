#include "holberton.h"
int _sqrt_2(int n, int x);
/**
 *_sqrt_recursion - function that returns the natural square root of a number
 *@n:integer to square root
 *
 * Return: Always 0 (Success)
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_2(n, 1));
}
/**
 *_sqrt_2 - function that returns the natural square root of a number
 *@n:num to square root
 *@x:int _sqrt_2
 *
 * Return: Always 0 (Success)
 */
int _sqrt_2(int n, int x)
{
	if (x * x > n)
	{
		return (-1);
	}
	else if (x * x == n)
	{
		return (x);
	}
	else
	{
		return (_sqrt_2(n, x + 1));
	}
}
