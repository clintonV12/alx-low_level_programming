#include "main.h"

char *input_a;

/**
 * show_shell -  recursively get user input_a (with arguments) and 
 * calls function to run commands.
 * Return: void
 */
void show_arg_shell()
{
	get_user_input_witharg();
	printf("%s",input_a);
	run_command(input_a);	
	
	show_arg_shell();
	
}

/**
 * get_user_input_witharg - prompts user to enter commands
 * and accepts command line arguments.
 * Return: void
 */
void get_user_input_witharg(){
	int i ; 
	char command;
	char *info = "#cisfun$";

	for (i = 0; i < 8; i++)
	{
		_putchar(info[i]);
	}
	_putchar(' ');

	fgets(&command,1024,stdin);
	
	input_a = &command;
}

