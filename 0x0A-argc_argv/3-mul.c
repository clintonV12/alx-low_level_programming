#include <stdio.h>
#include <stdlib.h>

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
int arg1, arg2, answer;

if (argc != 3)
{
printf("Error\n");
return (1);
}

arg1 = atoi(argv[1]);
arg2 = atoi(argv[2]);
answer = arg1 *arg2;

printf("%d\n", answer);

return (0);
}
