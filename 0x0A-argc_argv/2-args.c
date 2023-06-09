#include <stdio.h>

/**
* main - Prints the addition of positive numbers, followed by a new line.
* @argc: The number of arguments passed to the program.
* @argv: An array of pointers to the arguments.
*
* Return: always return 0.
*
*/
int main(int argc, char *argv[])
{
int arg;
for (arg = 0; arg < argc; arg++)
{
printf("%s\n", argv[arg]);
}

return (0);
}
