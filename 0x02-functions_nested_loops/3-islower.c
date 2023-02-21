#include "main.h"
/**
 * _islower - checks the case of the character c
 * @c: the character to to check case 
 * Return: Always int (1 - Success or 0 - Failure)
 */

int _islower(int c)
{
if (c >= 65 && c <= 90)
{
return (0);
}
else if (c >= 97 && c <= 122)
{
return (1);
}

}
