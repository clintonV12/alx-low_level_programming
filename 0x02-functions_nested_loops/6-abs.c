#include "main.h"
/**
 * _abs- compute the absolute value of integer of number n
 * @n: the number to to check
 * Return: Always int (the absolute value of n)
 */

int _abs(int n)
{
if (n < 0)
{
int a;
a = n * -1;
return (a);
}
else
{
return (n);
}
}
