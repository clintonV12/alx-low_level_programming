#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter
 * @array: The array.
 * @size: The size of array.
 * @action: A pointer to function to be executed.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array == NULL || action == NULL)
{
return;
}

while (size-- > 0)
{
action(*array);
array++;
}
}

