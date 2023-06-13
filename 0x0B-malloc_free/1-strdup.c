#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Allocates memory for an array of a certain number
 *           of elements each of an inputted byte size.
 * @nmemb: The number of elements.
 * @size: The byte size of each array element.
 *
 *
 * Return: If str is null or there is insufficient memory- NULL.
 *         Else - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
char *array;
int index;
int size;

size = find_size(str);

array = malloc(sizeof(char) * size);

if (array == NULL)
{
return NULL;
}

for (index = 0; index < size; index++)
{
array[index] = str[index];
}

array[index] = '\0';

return (array);
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
