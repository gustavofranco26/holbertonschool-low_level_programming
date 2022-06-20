#include "main.h"

/**
 *_strcpy - a function that copies the string pointed to by src.
 *@dest: String to destine.
 *@src: string to copy.
 *Return: Value dest (Sucess)
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';
	return (dest);
}
