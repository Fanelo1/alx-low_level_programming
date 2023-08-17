#include "main.h"
/**
 * print_square - function print square with #
 * @size: no of # square
 * Description: can use _putchar only to print and use '#' to print square
 */
void print_square(int size)
{
int i, y;

if (size > 0)
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
