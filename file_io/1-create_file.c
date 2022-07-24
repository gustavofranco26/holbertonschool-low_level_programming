#include "main.h"
#include <string.h>
/**
 * _strlen - find length of string
 * @str: string
 * Return: length
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}

/**
 *create_file - A function that creates a file.
 *@filename:Pointer a create to file
 *@text_content: String terminated to write in the file
 *Return: Always
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int n_wrt;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}

	n_wrt = write(fd, text_content, strlen(text_content));

	if (n_wrt == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
