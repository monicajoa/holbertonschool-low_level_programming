#include "function_pointers.h"
/**
 *print_name - function that prints a name.
 *@name: pointer with the name
 *@f: the pointer of the function to use
 *
 * Return: Always 0 (Success)
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == '\0')
	{
		return;
	}
	f(name);
}
