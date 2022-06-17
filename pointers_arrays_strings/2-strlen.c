#include "main.h"

/**
 *_strlen - Check a function that returns the length of a string.
 *@s: value character
 *Return: Always Longcade (Sucess)
 */
int _strlen(char *s)
{
	int longcade;

	longcade = 0;

	while (*s != '\0')
	{
		longcade++;
		s++;
	}
	return (longcade);
}
