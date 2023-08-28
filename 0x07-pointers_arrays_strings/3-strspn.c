#include "main.h"
/**
 * _strchr - entry point
 * @s: input
 * @c: input
 * Return: 0(success)
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
