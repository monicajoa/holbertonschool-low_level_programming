#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 *print_numbers - function that prints numbers.
 *@separator: is the string to be printed between numbers
 *@n:is the number of integers passed to the function
 *
 * Return: Always 0 (Success)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list a;

	va_start(a, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(a, int));
		if (i != (n - 1) && separator != '\0')
		{
			printf("%s", separator);
		}
	}
	va_end(a);
	printf("\n");
}
