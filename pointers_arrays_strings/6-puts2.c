#include "main.h"
#include <string.h>

/**
*puts2 - check a that prints every other character of a string, starting with the first character.
*@str: Crachacter Value
*Return: Always (Sucess)
*/

void puts2(char *str)
{
	char* p = "hello world";
	char s[32] = "";

	for (int i = 0; i < strlen(p); i+=2)
	{
		putchar(p[i]);
		s[i/2]=p[i];
	}
	printf("\n\n2nd option\n%s", s);
	return 0;
}
