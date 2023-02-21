#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long int a;
long int b;
long int c;
long int sum;

a = 1;
b = 2;

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
printf("%ld\n", sum);
return (0);
}
