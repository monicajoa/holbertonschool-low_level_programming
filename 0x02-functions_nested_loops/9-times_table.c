  #include "holberton.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int n, m, prod, dprod, uprod;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			prod = n * m;
			dprod = prod / 10;
			uprod = prod % 10;
			if (m < 1)
			_putchar(uprod + '0');
			else
			{
				if (prod <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(uprod + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(dprod + '0');
					_putchar(uprod + '0');
				}
			}
		}
		_putchar('\n');
	}
}
