#include "main.h"
/**
 * _strncat - A function that concatenates two strings.
 * @dest: pointer to string dest
 * @src: pointer to string src
 * @n: num of bytes to src
 *Return: the pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (c = 0; src[c] != '\0' && n > 0; c++, n--, i++)
	{
		dest[i] = src[c];
	}
	return (dest);
}
