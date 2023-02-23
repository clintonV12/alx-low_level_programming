#include "main.h"
/*
 * _isupper - checks if character is upper case
 *
 * @c: the character to check
 * 
 * Return: Always int (1 if is upper and 0 otherwise)
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
