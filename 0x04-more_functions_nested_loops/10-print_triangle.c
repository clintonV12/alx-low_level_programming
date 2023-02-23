#include "main.h"
/*
 * print_triangle - prints a triangle using #
 * @size: size of the square
 * Return: Always void
 */
void print_triangle(int size)
{
int i;
int h;
int j;
j = 35;

if (size <= 0)
{
_putchar('\n');
}

for (h = size; h > 0; h--)
{
for (i = 0; i < size; i++)
{
if(i >= h){
j = 35;
_putchar(j);
}
else
{
j = 32;
_putchar(j);
}

}
_putchar('\n');
}
}
