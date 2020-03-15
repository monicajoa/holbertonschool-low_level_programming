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
	printf("%c", va_arg(pr, int));
}
/**
 * p_int - print a integer
 * @b: address with the integer to print.
 *
 * Return: void
 */
void p_int(va_list pr)
{
	printf("%d", va_arg(pr, int));
}
/**
 * p_str - print a string
 * @b: address with the string to print.
 *
 * Return: void
 */
void p_str(va_list pr)
{
	char *str;

	str = va_arg(pr, char*);
	if (str == '\0')
		printf("(nil)");
	else
		printf("%s", str);
}
/**
 * p_float - print a float
 * @b: address with the float to print
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
		{"f", p_float}
	};
	int i, j;
	va_list lp;
	char *voidstr = "";
	char *space = ", ";

	va_start(lp, format);
	i = 0;
	while (format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == format_s[j].m[0])
			{
				printf("%s", voidstr);
				(format_s[j].fun)(lp);
				voidstr = space;
			}
			j++;
		}
		i++;
	}
	va_end(lp);
	printf("\n");
}
