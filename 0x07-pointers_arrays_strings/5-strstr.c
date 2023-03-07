#include <stddef.h>
#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the input string
 * @needle: the substring to find
 * Return: char*
 */

char *_strstr(char *haystack, char *needle)
{
char *p;
int i;
int j;
int s = -1;
p = NULL;

for (i = 0; i < countStr(needle); i++)
{
for (j = 0; j < countStr(haystack); j++)
{
if (needle[i] == haystack[j])
{
s = j;
p = &haystack[s];
return (p);
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
