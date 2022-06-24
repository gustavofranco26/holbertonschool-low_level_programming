#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *main - Funtion name
 *@argc: Arguments count
 *@argv: Argument matriz
 *Return: Always 0 (Sucess)
 */

int main(int argc, char *argv[])
{
	int n1, n2, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	product = (n1 * n2);

	printf("%d\n", product);
	return (0);
}
