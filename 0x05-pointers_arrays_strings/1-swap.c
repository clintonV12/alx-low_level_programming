#include "main.h"

/**
 * swap_int - swap to integers using pointers
 * @a: pointer to int a
 * @b: pointer to int b
 * Return: void
 *
 */

void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
