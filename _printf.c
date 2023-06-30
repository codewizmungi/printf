#include "main.h"

/**
* _printf - A function that produces output according to a format.
* @format: A character string
* Return: number of characters printed to output
*/

int _printf(const char *format, ...)
{
	int printed_chars;
	mapped_func mf[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent_sign},
		{"d", print_integer},
		{"i", print_integer},
		{"b", print_binary},
		{"r", print_reversed_string},
		{"R", print_rot13},
		{"u", print_unsigned_integer},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_big_hex},
		{NULL, NULL}
	};

	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	printed_chars = _printf_handler(format, mf, args);
	va_end(args);

	return (printed_chars);
}
