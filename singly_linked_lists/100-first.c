#include <stdio.h>

void Tortoise(void) __attribute__((constructor));
/**
 *Tortoise - Print before the main function is executed.
 *Return: Always.
 */

void Tortoise(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
