#include "main.h"
/**
 * error_check - checks for errors
 * @fdfr: integer returned from read
 * @fdto: integer returned from write
 * @av: argument element
 */
void error_check(int fdfr, int fdto, char **av)
{
	if (fdfr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	if (fdto == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
}

/**
 * main - Entry point
 * @ac: arguments
 * @av: arguments elements
 * Return: Always 0.
 */

int main(int ac, char **av)
{
	int numread = 1024, numwrit, fdfr, fdto, clfr, clto;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fdfr = open(av[1], O_RDONLY);
	fdto = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	error_check(fdfr, fdto, av);
	while (numread > 0)
	{
		numread = read(fdfr, buf, 1024);

		if (numread == -1)
			error_check(-1, 0, av);

		numwrit = write(fdto, buf, numread);

		if (numwrit == -1)
			error_check(0, -1, av);
	}
	clfr = close(fdfr);

	if (clfr == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fdfr), exit(100);

	clto = close(fdto);

	if (clto == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fdto), exit(100);

	return (0);
}
