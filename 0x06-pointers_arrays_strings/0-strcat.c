#include "main.h"

/**
 * _strcat - concatates string (appends src to dest)
 * @dest: the destination string
 * @src: the source string
 * Return: char*
 */

char *_strcat(char *dest, char *src)
{
int i;
int j;
int k;
i = 0;
j = 0;
k = 0;

while (dest[i] != '\0')
{
i++;
}

while (src[j] != '\0')
{
j++;
}

for (k = 0; k < j; k++)
{
dest[i + k] = src[k];
}
dest[i + j + 1] = '\0';

return (dest);
}
