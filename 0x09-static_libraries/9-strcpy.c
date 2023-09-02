#include "main.h"
/**
 * _strcpy - pointer to character
 * @dest: string 1 pointer
 * @src: string 2 pointer
 * Return: character (dest)
 */
char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i] != '\0'; i++)
{
	dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
