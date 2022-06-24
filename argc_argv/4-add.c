#include <stdio.h>
#include <stdlib.h>

/**
 *main - Funtion name
 *@argc: Arguments count
 *@argv: Argument matriz
 *Return: Always 0 (Sucess)
 */

int main(int argc, char *argv[])
{
	int i, symbol, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (symbol = 0; argv[i][symbol]; symbol++)
		{
			if(argv[i][symbol] < '0' || argv[i][symbol] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
