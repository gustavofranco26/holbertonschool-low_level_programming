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
	int j = 0;
	int length;

	while (str[i++])
		j++;
	if ((j % 2) == 0)
		length = j / 2;

	else 
		length = (j + 1)/ 2; 

	for (i = n; i < j; i++);
	_putchar('\n');
}
