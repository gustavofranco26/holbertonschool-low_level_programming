#include "main.h"

/**
 *_strcpy - a function that copies the string pointed to by src.
 *@dest: String to destine.
 *@src: string to copy.
 *Return: Value dest (Sucess)
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
