#include "main.h"

/**
* check_env - checks if string is env command.
* @str: The string to check for "env" chars.
*
* Return: 1 - if string is env command
*        Else - 0
*/
int check_env(const char *str)
{
int is_env = true;
if (str[0] != 'e')
{
is_env = false;
}
if (str[1] != 'n')
{
is_env = false;
}
if (str[2] != 'v')
{
is_env = false;
}

return (is_env);
}

/**
* run_env_command - runs env if command given is "env".
* @str: The string to check for "env" chars.
* Return: void
*/
void run_env_command(const char *str)
{
if (check_env(str))
{

int index = 0;
while (environ)
{
int i = 0;
while (environ[index])
{
_putchar(environ[index][i]);
if (environ[index][i] == '\0')
{
_putchar('\n');
}
if (environ[index][i] == '\0' && environ[index][i + 1] == '\0')
{
return;
}
i++;
}
index++;
}
}
}
