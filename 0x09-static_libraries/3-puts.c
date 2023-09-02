#include "main.h"
/**
 * _puts - print string and new line
 * @str: prints string
 */
void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
