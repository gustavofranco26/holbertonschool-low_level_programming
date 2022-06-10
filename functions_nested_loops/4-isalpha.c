#include "main.h"
/**
 * _isalpha - Checks for alphabetic character.
 * @c: Character lowercase.
 * Return: Always "1" when c is letter lowercase ou uppercase, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
