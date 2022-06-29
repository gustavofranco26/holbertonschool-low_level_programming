#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 *str_concat -  a function that concatenates two strings.
 *@s1: Argumstrpoint1
 *@s2: Argumstrpoint2
 *Return: Always
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i;
	int ccat = 0;
	int mmat = 0;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	for (i = 0; s1[i] || s2[i]; i++)
		mmat++;
	ptr = malloc(sizeof(char) * mmat);
	if (ptr = NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		ptr[ccat++] = s1[i];
	for (i = 0; s2[i]; i++)
		ptr[ccat++] = s2[i];

	return (ptr);
}
