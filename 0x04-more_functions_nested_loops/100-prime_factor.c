#include <stdio.h>
/**
 * main - main
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int num = 612852475143;
	unsigned long int dv = 2, factor;

	while (num != 0)
	{
		if ((num % dv) != 0)
		{
			dv = dv + 1;
		}
		else
		{
			factor = num;
			num = num / dv;
			if (num == 1)
			{
				printf("%lu\n", factor);
				return (0);
			}
		}
	}
	return (0);
}
