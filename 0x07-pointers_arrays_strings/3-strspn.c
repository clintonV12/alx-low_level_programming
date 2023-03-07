#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: string to get prefix from
 * @accept: the bytes to consider in prefix
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int n;
int i;

while (s[i] != '\0' && s[i] != 32)
{
n++;
i++;
}

return (n);
}
