#include "holberton.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: name of the file
 * @text_content: Holds the content to append
 * Return: 1 on success -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int opn, wrt;
	int i;

	if (filename == '\0')
	{
		return (-1);
	}
	if (text_content == '\0')
	{
		return (1);
	}
	opn = open(filename, O_RDWR | O_APPEND);
	if (opn == -1)
	{
		return (-1);
	}
	i = 0;
	while (text_content[i] != '\0')
	{
		i++;
	}
	wrt = write(opn, text_content, i);
	if (wrt == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
