#include "main.h"

/**
 * rot13 - encodes a string using rot13 algorithm
 * @str: the string to encode
 * Return: char*
 */

char *rot13(char *str)
{
int i;
i = 0;

while (str[i] != '\0')
{
if (str[i] >= 65 && str[i] <= 90)
{
int c;
c = str[i] + 13;
str[i] = c;
if (c > 90)
{
int t;
t = c - 90;
c = 65 + t;
str[i] = c - 1;
}
}
else if (str[i] >= 97 && str[i] <= 122)
{
int c;
c = str[i] + 13;
str[i] = c;
if (c > 122)
{
int t;
t = c - 122;
c = 97 + t;
str[i] = c - 1;
}
}
i++;
}

return (str);
}
