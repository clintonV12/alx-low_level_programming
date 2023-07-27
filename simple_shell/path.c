#include "main.h"

/**
* check_in_path - checks if binary is in the path.
* @str: The string "binary name" to check.
*
* Return: 1 - if binary if found
*        Else - 0
*/
int check_in_path(const char *str)
{
int in_path;
char *result;

in_path = false;
result = getenv(str);

if (result != NULL)
{

}

return (in_path);
}
