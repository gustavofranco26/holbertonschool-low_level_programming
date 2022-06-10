#include "main.h"
/**
 * isalpha - Checks for alphabetic character.
 * @c: Character lowercase.
 * Return: Always "1" when c is letter lowercase ou uppercase, 0 otherwise.
 */
int isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
