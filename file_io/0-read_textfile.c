#include "main.h"

/**
 *read_textfile - A function that reads a text file and prints it to the...
 *@filename:Pointer a read to file
 *@letters: The number of letters
 *Return: Always
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, wrt;
	unsigned int num = letters + 1;
	char *bf = malloc(num * sizeof(char));

	if (bf == NULL)
		return (0);

	if (filename == NULL || letters == 0)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == 0)
	{
		return (0);
	}

	rd = read(fd, bf, letters);
	wrt = write(STDOUT_FILENO, bf, rd);

	if (rd < 1 || wrt < 1)
	{
		free(bf);
		return (0);
	}

	close(fd);
	free(bf);
	return (wrt);
}
