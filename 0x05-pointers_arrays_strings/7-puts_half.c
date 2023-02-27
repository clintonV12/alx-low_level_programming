#include "main.h"

/**
 * puts_half - prints second half of string
 * @str: the string to print
 * Return: void
 */

void puts_half(char *str)
{
int len;
len = 0;

while (str[len] != '\0')
{
len++;
}

if (len % 2 == 0)
{
int h;
int i;
h = len / 2;

for (i = h; i < len; i++)
{
_putchar(str[i]);
}
}
else if (len % 2 != 0)
{
int h;
int i;

h = (len - 1) / 2;
for (i = h + 1; i < len; i++)
{
_putchar(str[i]);
}
}

_putchar('\n');
}
