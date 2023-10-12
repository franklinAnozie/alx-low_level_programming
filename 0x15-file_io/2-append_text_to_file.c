#include "main.h"

/**
 * append_text_to_file - crreate a file
 * @filename: file to be created
 * @text_content: string to be added to file
 * Return: 1 if successful -1 if not
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, i = 0;

	if (!filename)
	{
		return (-1);
	}

	if (filename && !text_content)
	{
		return (1);
	}

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
	{
		return (-1);
	}

	while (text_content[i] != '\0')
	{
		i++;
	}

	write(file, text_content, i);
	close(file);
	return (1);
}
