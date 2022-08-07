#include "main.h"

/**
 * _strncpy - A function that copies a string.
 * @dest: point string
 * @src: source string
 * @n: num of chars copy to over
 * Return: A pointer to resultant
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
