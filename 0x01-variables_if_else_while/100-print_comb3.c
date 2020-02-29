#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	int y;

	for (x = 0; x <= 8; x++)
	{
		y = x + 1;
		for (; y <= 9; y++)
		{
			putchar(x + '0');
			putchar(y + '0');
			if (x != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
