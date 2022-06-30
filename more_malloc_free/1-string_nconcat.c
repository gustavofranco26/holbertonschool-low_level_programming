#include <stdlib.h>
#include "main.h"

/**
 *string_nconcat - Write a function that concatenates two strings.
 *@s1: String0
 *@s2: String1
 *@n: int to include string
 *Return: Always
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	unsigned int ui;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;

	while (s1[i] != '\0')
		i++;

	ptr = malloc(sizeof(char) * (i + n + 1));

	if (ptr == NULL)
		return (NULL);

	i = ui = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}

	while (ui < n && s2[ui] != '\0')
	{
		ptr[i] = s2[ui];
		i++, ui++;
	}

	ptr[i] = '\0';
	return (ptr);
}
