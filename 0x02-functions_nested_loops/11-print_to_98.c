#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints numbers until 98
 * @n: the number to end in
 * Return: Always void
 */
void print_to_98(int n)
{
if (n < 98)
{
int i;
for (i = n; i <= 98; i++)
{
if (i == 98)
{
printf("%d", i);
}
else
{
printf("%d, ", i);
}
}
}
if (n > 98)
{
int i;
for (i = n; i >= 98; i--)
{
if (i == 98)
{
printf("%d", i);
}
else
{
printf("%d, ", i);
}
}
}
if (n == 98)
{
printf("%d", n);
}
printf("\n");
}
