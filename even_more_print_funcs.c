#include "main.h"

/**
 * print_reversed_string - Calls a function to reverse and print a string
 * @vl: list of arguments
 * Return: Number of characters printed
 */
int print_reversed_string(va_list vl)
{
	int len;
	char *str;
	char *ptr;

	str = va_arg(vl, char *);
	if (str == NULL)
		return (-1);
	ptr = rev_string(str);
	if (ptr == NULL)
		return (-1);
	for (len = 0; ptr[len] != '\0'; len++)
		_putchar(ptr[len]);
	free(ptr);
	return (len);
}

/**
 * print_rot13 - Converts string to rot13
 * @vl: list of arguments
 * Return: Number of characters printed
 */
int print_rot13(va_list vl)
{
	int a;
	int b;
	char *str;
	char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char u[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(vl, char *);
	if (str == NULL)
		return (-1);
	for (i = 0; str[i] != '\0'; i++)
	{
		for (x = 0; x <= 52; x++)
		{
			if (str[i] == s[x])
			{
				_putchar(u[x]);
				break;
			}
		}
		if (x == 53)
			_putchar(str[i]);
	}
	return (i);
}
