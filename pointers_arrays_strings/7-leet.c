#include "main.h"

/**
 * leet - A function that encodes a string into 1337.
 * @s: string
 * Return: encoded string
 */

char *leet(char *s)
{
	int i1 = 0, i2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (s[i1])
	{
		for (i2 = 0; i2 <= 7; i2++)
		{
			if (s[i1] == leet[i2] ||
			    s[i1] - 32 == leet[i2])
				s[i1] = i2 + '0';
		}

		i1++;
	}

	return (s);
}
