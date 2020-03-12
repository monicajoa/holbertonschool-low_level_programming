# include "3-calc.h"
/**
 *op_add - function that returns a add
 *@a: variable with the integer one
 *@b: variable with the integer two
 *
 * Return: Always 0 (Success)
 */
int op_add(int a, int b)
{
	int res_add;

	res_add = a + b;
	return (res_add);
}

/**
 *op_sub - function that returns a sub
 *@a: variable with the integer one
 *@b: variable with the integer two
 *
 * Return: Always 0 (Success)
 */
int op_sub(int a, int b)
{
	int res_sub;

	res_sub = a - b;
	return (res_sub);
}

/**
 *op_mul - function that returns a mul
 *@a: variable with the integer one
 *@b: variable with the integer two
 *
 * Return: Always 0 (Success)
 */
int op_mul(int a, int b)
{
	int res_mul;

	res_mul = a * b;
	return (res_mul);
}

/**
 *op_div - function that returns a div
 *@a: variable with the integer one
 *@b: variable with the integer two
 *
 * Return: Always 0 (Success)
 */
int op_div(int a, int b)
{
	int res_div;

	res_div = a / b;
	return (res_div);
}

/**
 *op_mod - function that returns a mod
 *@a: variable with the integer one
 *@b: variable with the integer two
 *
 * Return: Always 0 (Success)
 */
int op_mod(int a, int b)
{
	int res_mod;

	res_mod = a % b;
	return (res_mod);
}
