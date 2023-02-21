#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
int b;
int c;
int sum;

a = 1;
b = 2;
sum = sum + b;
while (c <= 4000000)
{
c = a + b;
a = b;
b = c;

if (c % 2 == 0)
{
sum = sum + c;
}
}

printf("%d\n", sum);
return (0);
}
