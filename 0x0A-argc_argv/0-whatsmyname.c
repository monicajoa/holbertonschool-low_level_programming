#include <stdio.h>
/**
 *main - program that prints its name.
 *@argc:the number of command line arguments and size of argv.
 *@argv:array containing the program command line arguments.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int n;

	n = argc - 1;
	printf("%s\n", argv[n]);
	return (0);
}
