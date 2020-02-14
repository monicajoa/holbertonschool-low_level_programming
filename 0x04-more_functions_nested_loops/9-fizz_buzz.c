#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n, m_3, m_5;

	for (n = 1; n <= 100; n++)
	{
		if (n < 100)
		{
			m_3 = n % 3;
			m_5 = n % 5;
			if (m_3 == 0 && m_5 == 0)
			{
				printf("FizzBuzz ");
			}
			else if (m_3 == 0)
			{
				printf("Fizz ");
			}
			else if (m_5 == 0)
			{
				printf("Buzz ");
			}
			else
			{
				printf("%d ", n);
			}
		}
		else
		printf("Buzz");
	}
	printf("\n");
	return (0);
}
