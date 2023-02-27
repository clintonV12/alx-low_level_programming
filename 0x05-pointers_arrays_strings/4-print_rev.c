#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the string to print
 * Return: void
 */

void print_rev(char *s)
{
int len;
int i;
len = 0;

while (s[len] != '\0')
{
len++;
}

i = 0;
for (i = len; i >= 0; i--)
{
_putchar(s[i]);
}
}

