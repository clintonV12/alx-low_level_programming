#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: pointer to memory area
 * @b: constabt byte
 * @n:number of memory bytes to fill
 * Return: char*
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}

return (s);
}
