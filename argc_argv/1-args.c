#include <stdio.h>
#include "main.h"

/**
 *main - Funtion name
 *@argc: Arguments count
 *@argv: Argument matriz
 *Return: Always 0 (Sucess)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%d\n", argc - 1);
	return (0);
}
