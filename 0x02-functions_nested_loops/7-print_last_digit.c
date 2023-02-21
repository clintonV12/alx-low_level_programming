#include "main.h"
/*
 * print_last_digit- prints the last digit of a number
 * @n: the number whoselast digit to print
 * Return: the value of the last digit
 *
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
