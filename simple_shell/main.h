#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
extern char **environ;
int _putchar(char c);
void show_prompt(void);
void get_user_input(void);
void run_command(char *command);
int check_illegal_chars(const char *str);
void show_shell(void);
void get_user_input_witharg(void);
void show_arg_shell(void);
int check_exit(const char *str);
void run_exit_command(const char *str);
int check_env(const char *str);
void run_env_command(const char *str);
#endif
