#include "main.h"

/**
 * _strcmp - compares strings
 * @s1: the first string
 * @s2: the second string
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
int i;
int j;
i = 0;
j = 0;

while (s1[i] != '\0')
{
i++;
}

while (s2[j] != '\0')
{
j++;
}

if (i < j)
{
return (-15);
}
else if (i > j)
{
return (15);
}
else
{
return (0);
}

}

