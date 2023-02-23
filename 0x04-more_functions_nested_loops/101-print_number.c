#include "main.h"
/*
 * print_number - prints an integer
 * @n: number to print
 * Return: Always void
 */
void print_number(int n)
{
if (n >= 0)
{
print_positive_num(n);
}
else if (n < 0)
{
print_negative_num(n);
}
}

/*
 * print_positive_num - prints a positive integer
 * @n: number to print
 * Return: Always void
 */
void print_positive_num(int n)
{
if (n >= 0 && n < 10)
{
_putchar('0' + n);
}
else if (n >= 10 && n < 100)
{
int a, b;

a = n / 10;
b = n % 10;
_putchar('0' + a);
_putchar('0' + b);
}
else if (n >= 100 && n < 1000)
{
int a, b, c;

a = n / 100;
b = (n % 100) / 10;
c = n % 10;
_putchar('0' + a);
_putchar('0' + b);
_putchar('0' + c);
}
else if (n >= 1000 && n < 10000)
{
int a, b, c, d;

a = n / 1000;
b = (n % 1000) / 100;
c = (n % 100) / 10;
d = n % 10;
_putchar('0' + a);
_putchar('0' + b);
_putchar('0' + c);
_putchar('0' + d);
}
}

/*
 * print_negative_num - prints a negative integer
 * @n: number to print
 * Return: Always void
 */
void print_negative_num(int n)
{
n = n * -1;
_putchar('-');
if (n >= 0 && n < 10)
{
_putchar('0' + n);
}
else if (n >= 10 && n < 100)
{
int a, b;

a = n / 10;
b = n % 10;
_putchar('0' + a);
_putchar('0' + b);
}
else if (n >= 100 && n < 1000)
{
int a, b, c;

a = n / 100;
b = (n % 100) / 10;
c = n % 10;
_putchar('0' + a);
_putchar('0' + b);
_putchar('0' + c);
}
else if (n >= 1000 && n < 10000)
{
int a, b, c, d;

a = n / 1000;
b = (n % 1000) / 100;
c = (n % 100) / 10;
d = n % 10;
_putchar('0' + a);
_putchar('0' + b);
_putchar('0' + c);
_putchar('0' + d);
}
}
