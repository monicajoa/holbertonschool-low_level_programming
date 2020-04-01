#include "holberton.h"
/**
 *create_file - creates a file.
 *@filename: name of the file to create
 *@text_content: is a NULL terminated string to write to the file
 *Return: actual number of letters it could read and print
 */
int create_file(const char *filename, char *text_content)
{
	int op, wt;
	int j = 0;

	if (filename == '\0')
	{
		return (-1);
	}
	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (op == -1)
	{
		return (-1);
	}
	if (text_content == '\0')
	{
		return (1);
	}
	while (text_content[j] != '\0')
	{
		j++;
	}
	wt = write(op, text_content, j);
	if (wt == -1)
	{
		return (-1);
	}
	close(op);
	return (1);
}
