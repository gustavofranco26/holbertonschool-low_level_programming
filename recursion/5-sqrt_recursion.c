#include "main.h"
#include <float.h>
/**
 *_sqrt_recursion - a function that returns the natural square root
 *@n: Argument
 *Return: Always (Sucess)
 */

int _sqrt_recursion(int n)
{
	float next = (prev + n / prev) / 2;

	if (fabs(next - prev) < FLT_EPSILON * next)
		return (next);
	return (_sqrt_recursion(n, next));
}
