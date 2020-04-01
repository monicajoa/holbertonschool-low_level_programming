#include "holberton.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: name of the file
 * @text_content: Holds the content to append
 * Return: 1 on success -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wt;
	int j;

	if (filename == '\0')
	{
		return (-1);
	}
	if (text_content == '\0')
	{
		return (1);
	}
	op = open(filename, O_RDWR | O_APPEND);
	if (op == -1)
	{
		return (-1);
	}
	j = 0;
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
