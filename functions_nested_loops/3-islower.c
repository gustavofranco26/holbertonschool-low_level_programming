#include "main.h"
/**
 * _islower - Checks for lowercase character.
 * @c: Character lowercase.
 * Return: Always "1" when is i, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
