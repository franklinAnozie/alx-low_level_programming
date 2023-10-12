#include "main.h"
/**
 * read_textfile - reads text file and prints it to stdout
 * @filename: Name of file to be read
 * @letters: exact number of letter to be printed
 * Return: 0 if it fails, else the number of characters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t _read_, _write_;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		return (0);
	}

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		return (0);
	}

	_read_ = read(file, buffer, letters);
	_write_ = write(STDOUT_FILENO, buffer, _read_);
	free(buffer);
	close(file);
	return (_write_);
}
