#include "holberton.h"
/**
 *read_textfile - reads a text file and prints it to the POSIX standard output
 *@filename : file to read to print
 *@letters : number of letters it should read and print
 *Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *m;
	int op, rd, pf;

	if (filename == '\0')
	{
		return (0);
	}
	op = open(filename, O_RDONLY);
	if (op == -1)
	{
		return (0);
	}
	m = malloc(sizeof(char) * letters);
	if (m == '\0')
	{
		return (0);
	}
	rd = read(op, m, letters);
	if (rd == -1)
	{
		free(m);
		return (0);
	}
	close(op);
	pf = write(STDOUT_FILENO, m, rd);
	free(m);
	if (pf == -1)
	{
		return (0);
	}
	return (pf);
}
