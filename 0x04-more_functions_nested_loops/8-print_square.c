#include "main.h"
/**
 * print - square function print square
 * @size: size of square
 * Description: can use _putchar only to print and use '#' to print square
 */
void print_square(int size)
{
	int x, y;
	y = 0;

	if (size < 1)
		_putchar('\n');
	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			_putchar('#');
			x++;
		}
		_putchar('\n');
		y++
	}
}
