#include "main.h"
/**
 * times_table - prints the 9 times table
 * Return: Always void
 */
void times_table(void)
{
int n;
int i;
int j;
n = 9;

for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
int k;
k = i * j;
if (k > 9)
{
print_more_than_nine(n, j, k);
}
else
{
print_less_than_nine(n, j, k);
}
}
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
_putchar('0' + (k / 10));
_putchar('0' + (k % 10));
_putchar('\n');
}
else
{
_putchar('0' + (k / 10));
_putchar('0' + (k % 10));
_putchar(',');
_putchar(32);
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
