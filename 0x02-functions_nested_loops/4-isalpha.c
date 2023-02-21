#include "main.h"
/**
 * _isalpha - checks if the character c is alphabetic
 * @c: the character to to check
 * Return: Always int (1 - Success or 0 - Failure)
 */

int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
else
{
return (0);
}
}
