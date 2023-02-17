#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int x;
int i;
int y;

for (i = 48; i < 58; i++)
{
for (x = i; x < 58; x++)
{
if (i == x)
{
continue;
}
for (y = x; y < 58; y++)
{
if (x == y)
{
continue;
}

putchar(i);
putchar(x);
putchar(y);
if (x < 57 || i < 57 || y < 57)
{
if (i >= 55 && x >= 56)
{
continue;
}
putchar(44);
putchar(32);
}
}
}
}

putchar('\n');
return (0);
}
