#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: string
 * Return: no of chars print
 */

int _printf(const char *format, ...)
{
	unsigned int i = 0, length = 0, ibuf = 0;
	va_list arg;
	int (*function)(va_list, char *, unsigned int);
	char *size;

	va_start(arg, format), size = malloc(sizeof(char) * 1024);
	if (!format || !size || (format[i] == '%' && !format[i + 1]))
		return (-1);
	if (!format[i])
		return (0);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				print_buff(size, ibuf), free(size), va_end(arg);
				return (-1);
			}
			else
			{
				function = get_print_func(format, i + 1);
				if (function == NULL)
				{
					if (format[i + 1] == ' ' && !format[i + 2])
						return (-1);
					handle_buf(size, format[i], ibuf), length++, i--;
				} else
				{
					length += function(arg, size, ibuf);
					i += print_func(format, i + 1);
				}
			} i++;
		} else
			handle_buf(size, format[i], ibuf), length++;
		for (ibuf = len; ibuf > 1024; ibuf -= 1024)
			;
	}
	print_buff(size, ibuf), free(size), va_end(arg);
	return (length);
}
