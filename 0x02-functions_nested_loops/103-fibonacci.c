#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int num1 = 1;
	unsigned long int num2 = 2;
	unsigned long int sum = 0;
	int aux;

	while (num1 < 4000000 && num2 < 4000000)
	{
		if ((num2 % 2) == 0)
		{
			sum += num2;
		}
		aux = num1 + num2;
		num1 = num2;
		num2 = aux;
	}
	printf("%lu\n", sum);
	return (0);
}
