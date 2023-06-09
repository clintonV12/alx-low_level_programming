#include <stdio.h>
#include <stdlib.h>

/**
* main - Prints the addition of positive numbers, followed by a new line.
* @argc: The number of arguments passed to the program.
* @argv: An array of pointers to the arguments.
*
* Return: 1 if the numbers contains symbols that are non-digits else return 0.
*
*/

int main(int argc, char *argv[])
{
int number, digit, answer = 0;

for (number = 1; number < argc; number++)
{
for (digit = 0; argv[number][digit]; digit++)
{
if (argv[number][digit] < '0' || argv[number][digit] > '9')
{
printf("Error\n");
return (1);
}
}

answer += atoi(argv[number]);
}

printf("%d\n", answer);

return (0);
}
