#include <stdio.h>

/**
 * main - prints the sum of all the multiples of 3 or 5
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, m3, m5;  
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		m3 = i % 3;
		m5 = i % 5;
		if (m3 == 0 || m5 == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
