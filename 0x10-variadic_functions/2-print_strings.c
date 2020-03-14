#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 *print_strings - function that prints strings
 *@separator: is the string to be printed between the strings
 *@n: is the number of strings passed to the function
 *
 * Return: Always 0 (Success)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list a;
	char *s;

	va_start(a, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(a, char *);
		if (s == '\0')
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}
		if (i != (n - 1) && separator != '\0')
		{
			printf("%s", separator);
		}
	}
	va_end(a);
	printf("\n");
}
