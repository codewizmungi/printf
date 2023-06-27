#include "main.h"

/**
 * _printf - A function that produces output according to a format.
 * @format: A character string
 * Return: number of characters printed out
 */

int _printf(const char *format, ...)
{
        va_list vl;
        int printed_chars = 0;

        va_start(vl, format);
        printed_chars = _printf_handler(format, vl);
        va_end(vl);

        return (printed_chars);
}
