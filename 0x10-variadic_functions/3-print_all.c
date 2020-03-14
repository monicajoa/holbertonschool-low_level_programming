#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * p_char - print a character
 * @b: address with the character to print.
 *
 * Return: void
 */
void p_char(void *b)
{
	char *c;

	c = b;
	printf("%s", c);
}
/**
 * p_int - print a integer
 * @b: address with the integer to print.
 *
 * Return: void
 */
void p_int(void *b)
{
	int *c;
	int a;

	c = b;
	a = *c;
	printf("%d", a);
}
/**
 * p_str - print a string
 * @b: address with the string to print.
 *
 * Return: void
 */
void p_str(void *b)
{
	char *c;

	c = b;
	printf("%s", c);
}
/**
 * p_float - print a float
 * @b: address with the float to print
 *
 * Return: void
 */
void p_float(void *b)
{
	float *c;
	float a;

	c = b;
	a = *c;
	printf("%f", a);
}
/**
 *print_all - function that prints anything.
 *@format: is list of types of arguments passed to the function
 *
 * Return: Always 0 (Success)
 */
void print_all(const char * const format, ...)
{
	fmt a[] = {
		{"c", p_char},
		{"i", p_int},
		{"s", p_str},
		{"f", p_float},
		{NULL, NULL}
	};
	int i, j;
	va_list lp;
	void *n;

	va_start(lp, format);
	i = 0;
	while (format[i] != '\0')
	{
		j = 0;
		while (a[j].m != '\0')
		{
			if (format[i] == a[j].m[0])
			{
				n = va_arg(lp, void *);
				a[j].fun(n);
			}
		}
	}
	printf("\n");
	va_end(lp);
}
