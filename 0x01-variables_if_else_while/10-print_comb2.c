#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int d;

	for (n = 0; n <= 9; n++)
	{
		for (d = 0; d <= 9; d++)
		{
			putchar(n + '0');
			putchar(d + '0');
			if (n != 9 || d != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
