#include "main.h"

/**
 * _strcmp - A  function that compares two strings.
 * @s1: pointer to string
 * @s2:´pointer to anoter string
 * Return: The comparation.
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
