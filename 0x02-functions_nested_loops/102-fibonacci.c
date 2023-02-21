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
int counter;

a = 1;
b = 2;
counter = 0;
printf("%ld, %ld, ", a, b);

while (counter < 48)
{
c = a + b;
a = b;
b = c;

if (counter != 47)
{
printf("%ld, ", c);
}
else
{
printf("%ld\n", c);
}
counter++;
}
return (0);
}
