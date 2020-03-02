#include <stdio.h>
#include <stdlib.h>
/**
 *main -  program that multiplies two numbers.
 *@argc:the number of command line arguments and size of argv.
 *@argv:array containing the program command line arguments.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int mul = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	return (0);
}
