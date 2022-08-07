#include "main.h"

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
 * _strcat - A function that concatenates two strings
 * @dest: pointer to string dest
 * @src: pointer to string src
 *Return: the pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int len1 = _strlen(dest);
	int len2 = _strlen(src);
	int n = 0;
	int c;

	for (c = len1; c <= len1 + len2; c++, n++)
		dest[c] = src[n];
	return (dest);
}
