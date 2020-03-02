#include <stdio.h>
#include <stdlib.h>
/**
 *main - program that prints the number of arguments passed into it.
 *@argc:the number of command line arguments and size of argv.
 *@argv:array containing the program command line arguments.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int n;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; n > 0; i++)
	{
		if (n >= 25)
			n = n - 25;
		else if (n >= 10)
			n = n - 10;
		else if (n >= 5)
			n = n - 5;
		else if (n >= 2)
			n = n - 2;
		else
			n = n - 1;
	}
	printf("%d\n", i);
	return (0);
}
