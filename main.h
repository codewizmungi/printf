#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
* struct mapped_func - A struct for mapping functions and symbols
* @ch: The character sybmol
* @func: the function asociated
*/

struct mapped_function
{
	char *ch;
	int (*func)(va_list);
};

typedef struct mapped_function mapped_func;

int _printf(const char *format, ...);
int _printf_handler(const char *format, mapped_func mf[], va_list args);
int _putchar(char c);
int print_char(va_list);
int print_string(va_list);
int print_percent_sign(va_list);
int print_integer(va_list);
int print_number(va_list);
int print_binary(va_list);
int print_reversed_string(va_list vl);
int print_rot13(va_list);
int print_unsigned_integer(va_list);
int print_octal(va_list list);
int print_hex(va_list list);
int print_big_hex(va_list list);

unsigned int base_len(unsigned int, int);
char *rev_string(char *);
void write_base(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
int print_unsigned_number(unsigned int);

#endif /* #ifndef MAIN_H */
