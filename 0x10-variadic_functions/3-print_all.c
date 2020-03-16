#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * p_char - print a character
 * @pr: list of paramethers
 *
 * Return: void
 */
void p_char(va_list pr)
{
	printf("%c", (char) va_arg(pr, int));
}
/**
 * p_int - print a integer
 * @pr: list of paramethers
 *
 * Return: void
 */
void p_int(va_list pr)
{
	printf("%d", va_arg(pr, int));
}
/**
 * p_str - print a string
 * @pr: list of paramethers
 *
 * Return: void
 */
void p_str(va_list pr)
{
	char *str;

	str = va_arg(pr, char*);
	if (str == '\0')

		str = "(nil)";
	printf("%s", str);
}
/**
 * p_float - print a float
 * @pr: list of paramethers
 *
 * Return: void
 */
void p_float(va_list pr)
{
	printf("%f", va_arg(pr, double));
}
/**
 *print_all - function that prints anything.
 *@format: is list of types of arguments passed to the function
 *
 * Return: Always 0 (Success)
 */
void print_all(const char * const format, ...)
{
	fmt format_s[] = {
		{"c", p_char},
		{"i", p_int},
		{"s", p_str},
		{"f", p_float},
		{NULL, NULL}
	};
	int i, j;
	va_list lp;
	char *voidstr = "";
	char *space = ", ";

	va_start(lp, format);
	i = 0;
	while (format != '\0' && format[i] != '\0')
	{
		j = 0;
		while (format_s[j].m != '\0')
		{
			if (format[i] == format_s[j].m[0])
			{
				printf("%s", voidstr);
				format_s[j].fun(lp);
				voidstr = space;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(lp);
}
