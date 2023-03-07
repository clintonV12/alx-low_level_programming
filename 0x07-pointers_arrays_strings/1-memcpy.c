#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: pointer to destination memory area
 * @src: pointer to source byte
 * @n:number of memory bytes to copy
 * Return: char*
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}

return (dest);
}
