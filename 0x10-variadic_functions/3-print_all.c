#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * p_char - print a character
 * @b: address with the character to print.
 *
 * Return: void
 */
void p_char(va_list pr)
{
	char *c;

	c = va_arg(pr, char*);
	printf("%s", c);
}
/**
 * p_int - print a integer
 * @b: address with the integer to print.
 *
 * Return: void
 */
void p_int(va_list pr)
{
	int a;

	a = va_arg(pr, int);
	printf("%d", a);
}
/**
 * p_str - print a string
 * @b: address with the string to print.
 *
 * Return: void
 */
void p_str(va_list pr)
{
	char *c;

	c = va_arg(pr, char*);
	printf("%s", c);
}
/**
 * p_float - print a float
 * @b: address with the float to print
 *
 * Return: void
 */
void p_float(va_list pr)
{
	float a;

	a = va_arg(pr, double);
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

	va_start(lp, format);
	i = 0;
	while (format[i] != '\0')
	{
		j = 0;
		while (a[j].m != '\0')
		{
			if (format[i] == a[j].m[0])
			{
				a[j].fun(lp);
			}
		}
	}
	printf("\n");
	va_end(lp);
}
