#include "main.h"
/**
 *jack_bauer(void) - prints all minutes of the day 
 * Return: Always void
 */

void jack_bauer(void)
{
int hr;
int min;

for (hr = 0; hr <= 23; hr++)
{
for (min = 0; min <= 59; min++)
{
if (hr > 9)
{
_putchar('0' + (hr / 10));
_putchar('0' + (hr % 10));
}
else
{
_putchar('0');
_putchar('0' + hr);
}
_putchar(':');
if (min > 9)
{
_putchar('0' + (min / 10));
_putchar('0' + (min % 10));
}
else
{
_putchar('0');
_putchar('0' + min);
}
_putchar('\n');
}
}

}
