#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array size
 * @size: size
 * @c: char
 * Description: create an array size
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
char *ptr;
size_t i;

if (size == 0)
{
return (NULL);
}
ptr = malloc(sizeof(char) * size);
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
ptr[i] = c;
}
return (ptr);
}
