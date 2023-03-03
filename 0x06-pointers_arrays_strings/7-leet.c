#include "main.h"
/**
 * leet - convert letter to number
 * @str: the string input
 * Return: char *
 */

char *leet(char *str)
{
int i;
i = 0;

while (str[i] != '\0')
{
if (str[i] == 65 || str[i] == 97)
{
str[i] = 52;
}
else if (str[i] == 101 || str[i] == 69)
{
str[i] = 51;
}
else if (str[i] == 111 || str[i] == 79)
{
str[i] = 48;
}
else if (str[i] == 116 || str[i] == 84)
{
str[i] = 55;
}
else if (str[i] == 108 || str[i] == 76)
{
str[i] = 49;
}

i++;
}

return (str);
}
