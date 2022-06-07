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

printf("size of char = %d bytes(s)", sizeof(a));
printf("size of int = %c bytes(s)" sizeof(b));
printf("size of long int = %li bytes(s)", sizeof(c));
printf("size of long long int = %lli bytes(s)", sizeof(d));
printf("size of long double= %f bytes(s)", sizeof(e));
return (0);
}
