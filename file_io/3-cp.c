#include "main.h"

/**
 *main - Copies the content of a file to another file
 *@arc: Number to arguments
 *@arv: The arguments
 *Return: Always
 */

int main(int arc, char **arv)
{
	int close1, close2, reader, writer, fd1, fd2;
	char buf[1024];

	if (arc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd1 = open(arv[1], O_RDONLY);
	if (fd1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arv[1]), exit(98);
	fd2 = open(arv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arv[2]), exit(99);
	while ((reader = read(fd1, buf, 1024)) > 0)
	{
		writer = (write(fd2, buf, reader));
		if (writer != reader)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arv[2]), exit(99);
	}
	if (reader == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arv[1]), exit(98);
	close1 = close(fd1);
	if (close1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1), exit(100);
	close2 = close(fd2);
	if (close2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2), exit(100);
	return (0);
}
