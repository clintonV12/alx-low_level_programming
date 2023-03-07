#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: input chess board info
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
int i;
int j;

for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
if ((a[i][j] >= 97 && a[i][j] <= 122) ||
(a[i][j] >= 65 && a[i][j] <= 90) ||
(a[i][j] == 32))
{
_putchar(a[i][j]);
}

if (j == 7)
{
_putchar('\n');
}

}
}
}
