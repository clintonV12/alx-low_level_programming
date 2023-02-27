#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the pointer to the string
 * Return: always int (the lenth of the string
 */

int _strlen(char *s)
{
int len;
int i;
i = 0;
len = 0;

while (s[i] != '\0')
{
i++;
}
len = i;
return (len);
}
