#include "main.h"
/**
 * print_last_digit - prints the last digit of n
 * @n: the number to to check
 * Return: Always int (1 - or 0 or -1)
 */

int print_last_digit(int n)
{
if (n < 0)
{
int last;
last = (n * -1) % 10;
_putchar(last);
return (last);
}
else
{
int last;
last = n % 10;
_putchar(last);
return (last);
}
}
