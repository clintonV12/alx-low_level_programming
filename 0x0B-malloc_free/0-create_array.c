#include <stdlib.h>
#include "main.h"

/**
 * create_array- Creates an array of chars.
 * @size: The size of the array.
 * @c: The array element.
 *
 * Return: If size is zero or if it fails - NULL.
 *         Else - a pointer to the created array.
 */
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int index;

if (size == 0)
{
return (NULL);
}

array = malloc(sizeof(char) * size);

if (array == NULL)
{
return (NULL);
}

for (index = 0; index < size; index++)
{
array[index] = c;
}

return (array);
}
