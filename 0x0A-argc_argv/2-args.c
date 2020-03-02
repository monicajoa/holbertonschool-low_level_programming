#include <stdio.h>
/**
 *main - Program that prints all arguments it receives.
 *@argc:the number of command line arguments and size of argv.
 *@argv:array containing the program command line arguments.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
