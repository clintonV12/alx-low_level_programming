#include "main.h"
/**
 * rev_string - reverse a string
 * @s: the string to reverse
 * Return: void
 */

void rev_string(char *s)
{
int len;
int i;
int j;
char *temp;

len = 0;

while (s[len] != '\0')
{
len++;
}

j = 0;
for (i = len - 1; i >= 0; i--)
{
temp[j] = s[i];
j++;
}

s = temp;
}
