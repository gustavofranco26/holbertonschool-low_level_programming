#include "main.h"
/**
 * _memcpy - A function that copies memory area.
 * @dest: char array to copy
 * @src: char array to copy from
 * @n: how many bytes copy
 * Return: the pointer to char array.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *area51;

	area51 = dest;
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (area51);
}
