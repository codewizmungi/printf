#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _printf_handler(const char *format, va_list args);
int _putchar(char c);

#endif /* #ifndef MAIN_H */
