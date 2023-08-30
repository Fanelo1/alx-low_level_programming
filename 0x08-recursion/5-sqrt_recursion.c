#include "main.h"
/**
 * sqrt_a - return square root
 * @n: input num
 * @c: itarator
 * Return: sqaure root or -1
 */
int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > 4)
	{
		return (-1);
	}
	return (sqrt_a(a, b + 1));
}
/**
 * _sqrt_recursion - return the root
 * @n: input
 * Return: natural root
 */
int _sqrt_recursion(int n)
{
return (sqrt(n, 0));
}
