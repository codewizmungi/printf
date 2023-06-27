#include :se"main.h"

/**
* _printf_handler - A function to handle format specifiers for _printf
* @format: A character string
* @args: A variable argument list
* Return: number of characters printed from variable arguments
* to character string
*/

int _printf_handler(const char *format, va_list args)
{
	int printed_chars = 0;

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				_putchar(va_arg(args, int));
				printed_chars = 1;
			}
			else if (*format == 's')
			{
				const char *s = va_arg(args, const char *);

				while (*s != '\0')
				{
					_putchar(*s++);
					printed_chars += 1;
				}
			}
			else if (*format == '%')
			{
				_putchar('%');
				_putchar('%');
				printed_chars = 1;
			}

		}
		else
		{
			_putchar(*format);
		}
		format++
	}
	return (printed_chars);
}
