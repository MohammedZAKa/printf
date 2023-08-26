#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_string(char *str);
void print_number(int n);
int get_num_size(int n);
int find_digit(int num);
int first_digit(int num);
void convert_to_octal(int n);

#endif
