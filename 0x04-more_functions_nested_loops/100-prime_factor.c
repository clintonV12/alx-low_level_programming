#include <stdio.h>
/**
 * main - prints largest prime factor of 612852475143
 * Return: Always int (0)
 */
int main(void)
{
long int n;
long int lg;
long int i;
n = 612852475143;

for (i = 1; i <= n; i++)
{
if (n % i == 0)
{
long int j;
for (j = 2; j <= n / 2; ++j) 
{
if (n % j == 0) {
continue;
}
else
{
lg = i;
}
}
}
}

printf("%ld\n", lg);
return (0);
}
