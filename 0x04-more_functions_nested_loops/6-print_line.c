#include "main.h"
/*
 * print_line - prints a line using _
 *
 * Return: Always void
 */
void print_line(int n)
{
int i;
int j;
j = 95;

for (i = 1; i <= n; i++)
{
if (n <= 0)
{
break;
}
else
{
_putchar(j);
}
}
_putchar('\n');
}
