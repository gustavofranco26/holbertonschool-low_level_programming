#include "main.h"
#include <string.h>

/**
* puts_half - a function that prints half of a string.
*@str: Crachacter Value
*Return: Always (Sucess)
*/

void puts_half(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
		i++;

	if (i % 2 != 0)
		i = (i / 2) + 1;

	else
		i = (i / 2);

	for (j = i; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	 _putchar('\n');
}
