#include "main.h"
/**
 * _isdigit - checks if character is upper case
 *
 * @c: the character to check
 *
 * Return: Always int (1 if is upper and 0 otherwise)
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
