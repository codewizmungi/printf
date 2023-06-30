#include "main.h"

/**
 * _printf_handler - A function that returns the printed characters
 * from a string according to a format
 * @format: A string containing all the desired characters.
 * @mf: A list of all functions.
 * @args: A variable argument list.
 * Return: number of characters printed from variable arguments
 * to character string.
 */

int _printf_handler(const char *format, mapped_func mf[], va_list args)
{
	int a, b, c, printed_chars = 0;

	while (*format != '\0')
	{
		if (*format == '%')
		{
			for (b = 0; mf[b].ch != NULL; b++)
			{
				if (format[a + 1] == mf[b].ch[0])
				{
					c = mf[b].func(args);
					if (c == -1)
						return (-1);
					printed_chars += c;
					break;
				}
			}
			if (mf[b].ch == NULL && format[a + 1] != ' ')
			{
				if (format[a + 1] != '\0')
				{
					_putchar(format[a]);
					_putchar(format[a + 1]);
					printed_chars = printed_chars + 2;
				}
				else
					return (-1);
			}
			a += 1;
		}
		else
		{
			_putchar(format[a]);
			printed_chars++;
		}
		format++;
	}
	return (printed_chars);
}
