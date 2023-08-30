#include "main.h"
/**
 * _puts_recursion - recursive function
 * @s: pointer
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_putchar(s + 1);
	}
	else
		_putchar('\n');
}
