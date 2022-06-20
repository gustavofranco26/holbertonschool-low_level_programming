#include "main.h"

/**
 *rev_string - a function that reverses a string.
 *@s: Crachacter Value
 *Return: Always (Sucess)
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	int length;

	while (*s[i] != '\0')
	{
		i++;
	}
	while (j < i--)
	{
		s[j++] = s[i];
		s[i] = length;
		length = s[j];
	}
}
