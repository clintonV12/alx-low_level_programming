#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings s1 & s2
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
char *concat;
int len;
int index;

len = find_size(s1) + find_size(s2);

if (s1 == NULL)
{
s1 = "";
}

if (s2 == NULL)
{
s2 = "";
}

for (index = 0; s1[index]; index++)
{
len++;
}

concat = malloc(sizeof(char) * (len + 1));

if (concat == NULL)
{
return (NULL);
}

len = 0;

for (index = 0; s1[index]; index++)
{
concat[len++] = s1[index];
}

for (index = 0; s2[index] && index < len; index++)
{
concat[len++] = s2[index];
}

concat[len] = '\0';

return (concat);
}

/**
 * find_size - Finds the size of a string.
 * @str: The string to be measured.
 *
 * Return: The length of the string.
*/
int find_size(char *str)
{
int size = 0;

while (*str++)
{
size++;
}

return (size);
}

