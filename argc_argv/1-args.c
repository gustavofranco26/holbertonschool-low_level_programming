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
	//for (i = 0; i < argc; i++)
	//{
	//	printf("%s\n", argv[-1]);
	//}
	printf("%s\n", argv[0]);
	if (argc < 2)
		printf("\n");
	else
		printf("%s\n", argv[1]);
	return (0);
}
