#include "main.h"
/**
 * _memcpy - copy a function
 * @dest: memory
 * @src: copied memory
 * *@n: bytes memory
 * Return: copied memory with n byte
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
