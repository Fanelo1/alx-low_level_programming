#include "main.h"
/**
 * sqrt_a - return square root
 *  * Return: sqaure root or -1
 */
int sqrt_a(int a, int b)
{
if (b * b == a)
{
return (b);
}
else if (b * b > a)
{
return (-1);
}
return (sqrt_a(a, b + 1));
}
/**
 * _sqrt_recursion - return the root
 * @n: input
 * @c: input
 * @a: input
 * @b: input
 * Return: natural root
 */
int _sqrt_recursion(int n)
{
return (sqrt_a(n, 0));
}
