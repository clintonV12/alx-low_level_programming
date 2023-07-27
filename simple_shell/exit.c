#include "main.h"

/**
* check_exit - checks if string is exit command.
* @str: The string to check for "exit" chars.
*
* Return: 1 - if string is exit command
*        Else - 0
*/
int check_exit(const char *str)
{
int is_exit = true;
if (str[0] != 'e')
{
is_exit = false;
}
if (str[1] != 'x')
{
is_exit = false;
}
if (str[2] != 'i')
{
is_exit = false;
}
if (str[3] != 't')
{
is_exit = false;
}

return (is_exit);
}

/**
* run_exit_command - runs exit if command given is "exit".
* @str: The string to check for "exit" chars.
* Return: void
*/
void run_exit_command(const char *str)
{
if (check_exit(str))
{
exit(EXIT_SUCCESS);
}
}
