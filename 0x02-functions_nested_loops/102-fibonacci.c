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
int counter;

a = 1;
b = 2;
counter = 0;
printf("%d\n", a);
printf("%d\n", b);

while (counter < 48)
{
c = a + b;
a = b;
b = c;

printf("%d\n", c);
counter++;
}
return (0);
}
