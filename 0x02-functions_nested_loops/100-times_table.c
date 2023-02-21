#include "main.h"
/**
 * print_times_table - prints the n times table
 * @n: number of times to print table
 * Return: Always void
 */
void print_times_table(int n)
{
int num;
int i;
int j;
num = n;
if (num > 0 && num <= 15)
{
for (i = 0; i <= num; i++)
{
for (j = 0; j <= num; j++)
{
int k;
k = i * j;
if (k > 9)
{
print_more_than_nine(num, j, k);
}
else
{
print_less_than_nine(num, j, k);
}
}
}
}
else
{
}
}

/**
 * print_more_than_nine - prints the 9 times table for values more than nine
 * @n: - param one
 * @j: - param two
 * @k: - param k
 * Return: Always void
 */
void print_more_than_nine(int n, int j, int k)
{
if (j == n)
{
if (k > 99)
{
_putchar('0' + (k / 100));
_putchar('0' + ((k / 10) % 10));
_putchar('0' + (k % 10));
_putchar('\n');
}
else
{
_putchar('0' + (k / 10));
_putchar('0' + (k % 10));
_putchar('\n');
}
}
else
{
if (k > 99)
{
_putchar('0' + (k / 100));
_putchar('0' + ((k / 10) % 10));
_putchar('0' + (k % 10));
_putchar(',');
_putchar(32);
}
else
{
_putchar('0' + (k / 10));
_putchar('0' + (k % 10));
_putchar(',');
_putchar(32);
}
}
}

/**
 * print_less_than_nine - prints the 9 times table for values less than nine
 * @n: - param one
 * @j: - param two
 * @k: - param three
 * Return: Always void
 */
void print_less_than_nine(int n, int j, int k)
{
if (j == n)
{
_putchar(32);
_putchar('0' + k);
_putchar('\n');
}
else
{
if (j == 0)
{
_putchar('0' + k);
_putchar(',');
_putchar(32);
}
else
{
_putchar(32);
_putchar('0' + k);
_putchar(',');
_putchar(32);
}
}
}
