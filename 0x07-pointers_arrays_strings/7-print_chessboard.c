#include "holberton.h"
/**
 *print_chessboard - function that prints the chessboard.
 *@a: location of the string
 *
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int index_1;
	int index_2;

	index_1 = 0;
	while (index_1 <= 7)
	{
		index_2 = 0;
		while (index_2 <= 7)
		{
			_putchar(a[index_1][index_2]);
			index_2++;
		}
		_putchar('\n');
		index_1++;
	}
}
