#include "main.h"
/**
 * puts2 - print all even numbers
 * @str: the string input
 * Return: nothing
 */
void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
