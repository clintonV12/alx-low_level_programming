#include "main.h"
/**
 * cap_string - capitilize every word in string
 * @str: the string input
 * Return: char *
 */

char *cap_string(char *str)
{
int i;
i = 0;

while (str[i] != '\0')
{
if (str[i] == 32 || str[i] == '\n' || str[i] == 59 ||
str[i] == 44 || str[i] == 46 || str[i] == 33 ||
str[i] == 63 || str[i] == 34 || str[i] == 40 ||
str[i] == 41 || str[i] == 123 || str[i] == 125 ||
str[i] == 9 || str[i] == 11)
{
if (str[i + 1] >= 90 && str[i + 1] <= 122 && str[i + 1] != '\0')
{
str[i + 1] = str[i + 1] - 32;
}

}
i++;
}

return (str);
}
