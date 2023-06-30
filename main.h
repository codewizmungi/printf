#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
* struct mapped_func - A struct for mapping functions and symbols
* @ch: The character sybmol
* @func: the function asociated
*/

struct mapped_func
{
	char *ch;
	int (*func)(va_list);
};

int _printf(const char *format, ...);
int _printf_handler(const char *format, mapped_func mf[], va_list args);
int _putchar(char c);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_integer(va_list);
int print_number(va_list);
int print_binary(va_list);
int print_reversed(va_list arg);
int rot13(va_list);
int unsigned_integer(va_list);
int print_octal(va_list list);
int print_hex(va_list list);
int print_heX(va_list list);

#endif /* #ifndef MAIN_H */
