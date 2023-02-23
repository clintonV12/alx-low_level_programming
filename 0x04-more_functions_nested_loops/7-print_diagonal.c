#include "main.h"
/**
 * print_diagonal - prints a line using _
 * @n: number of times to print n
 * Return: Always void
 */
void print_diagonal(int n)
{
int i;
int h;
int j;
j = 32;

if (n <= 0)
{
_putchar('\n');
}

for (h = 1; h <= n; h++)
{
for (i = 1; i <= h; i++)
{
if (i == h)
{
j = 92;
_putchar(j);
_putchar('\n');
}
else if (i < h)
{
j = 32;
_putchar(j);
}
}

}
}
