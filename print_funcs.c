#include "main.h"

/**
 * print_char - Prints character
 * @vl: list of arguments
 * Return: Number of characters printed.
 */
int print_char(va_list vl)
{
	_putchar(va_arg(vl, int));
	return (1);
}

/**
 * print_string - Prints a string
 * @vl: list of arguments
 * Return: Number of characters printed.
 */
int print_string(va_list vl)
{
	int a;
	char *str;

	str = va_arg(vl, char *);
	if (str == NULL)
		str = "(null)";
	for (a = 0; str[a] != '\0'; a++)
		_putchar(str[a]);
	return (a);
}

/**
 * print_percent_sign - Prints the percent sign
 * @vl: list of arguments
 * Return: Number of characters printed.
 */
int print_percent_sign(__attribute__((unused))va_list vl)
{
	_putchar('%');
	return (1);
}

/**
 * print_integer - Prints an integer
 * @vl: list of arguments
 * Return: Number of characters printed.
 */
int print_integer(va_list vl)
{
	int num_length;

	num_length = print_number(vl);
	return (num_length);
}

/**
 * print_unsigned_integer - Prints Unsigned integers
 * @vl: list of arguments
 * Return: Number of characters printed
 */
int print_unsigned_integer(va_list vl)
{
	unsigned int num;

	num = va_arg(vl, unsigned int);

	if (num == 0)
		return (print_unsigned_number(num));

	if (num < 1)
		return (-1);
	return (print_unsigned_number(num));
}
