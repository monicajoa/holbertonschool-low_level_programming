#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a matrix.
 * @a: pointer with the address of the matrix
 * @size: int that represents the size of the matrix
 *
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int index1;
	int index2;
	int cont_dig1 = 0;
	int cont_dig2 = 0;
	int icrmt1 = 0;
	int icrmt2 = 0;

	index1 = 0;
	while (index1 < size)
	{
		icrmt1 = ((size + 1) * index1);
		cont_dig1 = cont_dig1 + a[icrmt1];
		index1++;
	}
	index2 = 1;
	while (index2 <= size)
	{
		icrmt2 = ((size - 1) * index2);
		cont_dig2 = cont_dig2 + a[icrmt2];
		index2++;
	}
	printf("%d, %d\n", cont_dig1, cont_dig2);
}
