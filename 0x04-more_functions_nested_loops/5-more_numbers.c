#include "main.h"
/*
 * more_numbers - prints numbers 0 - 9 except 2 & 4
 *
 * Return: Always void
 */
void more_numbers(void)
{
int i;
int j;
for (j = 0; j <= 10; j++)
{
int k;
k = 48;
for (i = 48; i <= 63; i++)
{
if (i > 57 && i <= 63)
{
int d;
d = 49;
if (i == 63)
{
k = 0;
d = 10;
}
_putchar(d);
_putchar(k);
k++;
}
else
{
_putchar(i);
}
}
}
}
