#include <stddef.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to string
 * @c: the character to locate
 * Return: char*
 */

char *_strchr(char *s, char c)
{
int i;
char *p;
i = 0;
p = NULL;

while (s[i] != '\0')
{
if (s[i] == c)
{
p = &s[i];
return p;
}
i++;
}

return (p);
}
