#include <stdio.h>

/**
 * main - Punto de inicio
 *
 *
 *
 * Return: Retornar "0" (accion)
*/

int main(void)
{
char a;
int b;
long c;
long long d;
float e;

printf("size of a char: %lu bytes(s)\n", sizeof(a));
printf("size of an int: %lu bytes(s)\n", sizeof(b));
printf("size of a long int: %lu bytes(s)\n", sizeof(c));
printf("size of a long long int: %lu bytes(s)\n", sizeof(d));
printf("size of a long double: %lu bytes(s)\n", sizeof(e));
return (0);
}
