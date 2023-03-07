#include <stdio.h>
#include "main.h"

/**
 * print_diagsums prints the sum of 2 diagonals of square matrix
 * @a: the array or matrix
 * @size: size of the array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
int i;
int j;
int sum1;
int sum2;

for (i = 0; i < size; i++)
{
sum1 += a[i][i];
}

j = size - 1;
for (i = 0; i < size; i++)
{
sum2 += a[i][j];
j--;
}

printf("%d, %d\n", sum1, sum2);
}

