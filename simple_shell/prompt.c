#include "main.h"

char input;

/**
* show_shell -  recursively get user input and
* calls function to run commands.
* Return: void
*/
void show_shell(void)
{
get_user_input();

run_command(&input);

show_shell();
}

/**
* show_prompt - displays info at start of prompt .
* Return: void
*/
void show_prompt(void)
{
int i;
char *info = "#cisfun$";

for (i = 0; i < 8; i++)
{
_putchar(info[i]);
}
_putchar(' ');
}

/**
* get_user_input -  prompts user to enter commands.
* Return: void
*/
void get_user_input(void)
{
char command;

show_prompt();
fgets(&command, 1024, stdin);

if (check_illegal_chars(&command))
{
printf("%s", "shell: No such file or directory\n");
get_user_input();
}

/*Exit the shell*/
run_exit_command(&command);
/*Print env*/
run_env_command(&command);

sscanf(&command, "%s", &input);
}

/**
* run_command - executes the binary entered by the user if its present
* @command: The command enter in stdin.
* Return: void
*/
void run_command(char *command)
{
char *newargv[] = { NULL, NULL, NULL };
char *newenviron[] = { NULL };

newargv[0] = command;

execve(command, newargv, newenviron);

perror("shell");   /* execve() returns only on error */
/*exit(EXIT_FAILURE);*/
}

/**
* check_illegal_chars - checks is string has illegal characters.
* @str: The string to check for illegal chars.
*
* Return: 1 - it string has illegal character
*        Else - 0
*/
int check_illegal_chars(const char *str)
{
int index = 0;
int illegal = false;

while (str[index])
{
if (str[index] == ';' || str[index] == '|' ||
str[index] == '>' || str[index] == ' ')
{
illegal = true;
break;
}
index++;
}

return (illegal);
}





