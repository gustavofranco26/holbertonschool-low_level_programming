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
	size_t str1, str2, str3, i = 0;
	char *a;

	str1 = strlen(s1);

	str2 = strlen(s2);
	str3 = str1 + str2 + 1;
	a = malloc(str3);

	while (*s1 != '\0')
	{
		a[i] = *s1;
		s1++;
		i++;
	}

	while (*s2 != '\0')
	{
		a[i] = *s2;
		s2++;
		i++;
	}

	a[i] = '\0';

	return (a);
}

/**
 *ccat - name function concatenation
 *Return: Always
 */

int ccat(void)
	char *stri = str_concat( );
	printf("%s\n", stri);
	free(stri);
	return (0);
}
