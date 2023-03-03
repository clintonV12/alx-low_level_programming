#include "main.h"

/**
 * _strncat - concatates string (appends src to dest)
 * @dest: the destination string
 * @src: the source string
 * @n: number of bytes to use
 * Return: char*
 */

char *_strncat(char *dest, char *src, int n)
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

for (k = 0; k < n; k++)
{
dest[i + k] = src[k];
}
dest[i + j + 1] = '\0';

return (dest);
}

