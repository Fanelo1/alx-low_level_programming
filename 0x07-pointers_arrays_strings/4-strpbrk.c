#include "main.h"
/**
 * _strpbrk - seach any byte string
 * @s: input
 * @accept: input
 * Return: 0 (seccess)
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
			return (s);
		}
		s++;
	}
	return ('\0');
}
