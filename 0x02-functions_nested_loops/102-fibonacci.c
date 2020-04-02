#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int num1 = 0;
	unsigned long int num2 = 1;
	unsigned long int aux;
	int b;

	for (b = 0; b < 50; b++)
	{
		aux = num1 + num2;
		num1 = num2;
		num2 = aux;
		printf("%lu", num2);
		if (b != 49)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
