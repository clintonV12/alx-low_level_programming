#include "main.h"

/**
 * string_toupper - convert lowercase to uppeer case
 * @str: the string to convert
 * Return: *char
 */

char *string_toupper(char *str)
{
int i;
i = 0;

while (str[i] != '\0')
{
if (str[i] >= 90 && str[i] <= 122)
{
str[i] = str[i] - 32;
}
i++;
}

return (str);
}
