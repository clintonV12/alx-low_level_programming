#include <stddef.h>
#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: the string to search
 * @accept: the bytes to search for
 * Return: char*
 */
char *_strpbrk(char *s, char *accept)
{
char *p;
int i;
int j;
int first_occur;
first_occur = -1;
p = NULL;

for (i = 0; i < countStr(accept); i++)
{
for (j = 0; j < countStr(s); j++)
{
if (accept[i] == s[j])
{
if (first_occur > j && first_occur >= 0)
{
first_occur = j;
p = &s[first_occur];
}
else if (first_occur < 0)
{
first_occur = j;
p = &s[first_occur];
}
}
}
}

return (p);
}

/**
 * countStr - finds size of string
 * @s: the string input
 * Return: int
 */
int countStr(char *s)
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
