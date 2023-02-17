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

for (i = 48; i < 58; i++)
{
for (x = i; x < 58; x++)
{
if (i == x)
{
continue;
}

putchar(i);
putchar(x);
if (x < 57 || i < 57)
{
if (i >= 56)
{
continue;
}
putchar(44);
putchar(32);
}
}
}

putchar('\n');
return (0);
}

