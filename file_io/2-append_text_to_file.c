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
 *append_text_to_file - A function that appends text at the end of a file.
 *@filename:Pointer a create to file
 *@text_content: String terminated to add in the file
 *Return: Always
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int wrt;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		wrt = write(fd, text_content, strlen(text_content));

		if (wrt == -1)
		{
			close(fd);
			return (-1);
		}
		close(fd);
		return (1);
	}
	else
	{
		close(fd);
		return (1);
	}
}
