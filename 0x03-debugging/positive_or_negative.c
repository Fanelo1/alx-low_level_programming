#include "main.h"
/**
 * main - Determine if anumber is positive, negative or zero
 * 0 : is the number to be checked
 * Return: 0 on success
 */
void positive_or_negative(int i)
{
if (i > 0)
printf("%d is positive\n", i);
else if (i < 0)
printf("%d is negative", i);
else
printf("%d is zero", i);
}
