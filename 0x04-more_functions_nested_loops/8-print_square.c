#include "main.h"
/**
 * print_square - function print square with #
 * @size: no of # square
 * Description: can use _putchar only to print and use '#' to print square
 */
void print_square(int size)
{
int i, x;

if (size > 0)
{
for (i = 0; i < size; i++)
{
for (x = 0; x < size; x++)
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
