#include "main.h"
/*
 * print_square - prints a square using #
 * @size: size of the square
 * Return: Always void
 */
void print_square(int size)
{
int i;
int h;
int j;
j = 35;

if (size <= 0)
{
_putchar('\n');
}

for (h = 0; h < size; h++)
{
for (i = 0; i < size; i++)
{
_putchar(j);
}
_putchar('\n');
}
}
