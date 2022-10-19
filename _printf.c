#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: identifier
 * Return: len of string
 */

int _printf(const char * const format, ...)
{
	print_t m[] = {
		{"%s", print_string}, {"%c", print_char},
		{"%%" print_37}, {"%i", print_int},
		{"%d", print_dec}, {"%r", print_srev},
		{"%R", print_rot13}, {"%b", print_bin},
		{"%u", print_unsined}, {"%o", print_oct},
		{"%x", print_hex}, {"%X" print_HEX},
		{"%S", print_string}, {"%p", peint_pointer}
	};
	va_list args;
	int i = 0, j, length = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				length += m[j].f(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		length++;
		i++;
	}
	va_end(args);
	return (length);
}

