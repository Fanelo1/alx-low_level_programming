#include "main.h"
/**
 * _strlen_recursion - print string
 * @s: string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		Return (1 + _strenlen_recursion(s + 1));
	}
	return (0);
}
