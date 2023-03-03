#include "main.h"

/**
 * reverse_array - reverses the content of array
 * @a: the int array
 * @n: the number of elements in array
 * Return: void
 */

void reverse_array(int *a, int n)
{
int temp[n];
int i;
int j;

for (i = 0; i < n; i++)
{
temp[i] = a[i];
}

j = 0;
for (i = n - 1; i >= 0; i--)
{
a[j] = temp[i];
j++;
}
}
