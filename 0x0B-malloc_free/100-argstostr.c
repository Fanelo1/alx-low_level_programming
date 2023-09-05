#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * argstostr - concatinates
 * @ac: argument count
 * @av: vector
 * Return: a pointer
 */
char *argstostr(int ac, char **av)
{
	char *aout;
	int i, n, k = 0, len = 0;

	if (ac == 0)
		return (NULL);
	for (i = 0; i< ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			len++i;
	}
	len += ac;

	aout = malloc(sizeof(char) * len + 1);

	if (aout == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			aout[k] = av[i][n];
		}
		if (aout[k] = '\0')
		{
			aout[k++] = '\n';
		}
	}
	return (aout);
}
