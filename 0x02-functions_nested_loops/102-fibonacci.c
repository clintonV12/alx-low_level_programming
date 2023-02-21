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
printf("%ld\n", a);
printf("%ld\n", b);

while (counter < 48)
{
c = a + b;
a = b;
b = c;

printf("%ld\n", c);
counter++;
}
return (0);
}
