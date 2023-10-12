#include "main.h"

/**
 * create_file - crreate a file
 * @filename: file to be created
 * @text_content: string to be added to file
 * Return: 1 if successful -1 if not
 */

int create_file(const char *filename, char *text_content)
{
	int file, i = 0;

	if (!filename)
	{
		return (-1);
	}

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		while (text_content[i] != '\0')
		{
			i++;
		}

		write(file, text_content, i);
	}

	close(file);
	return (1);
}
