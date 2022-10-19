#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>


/**
 * struct format - matches conversion specifiers
 * @id: type char pointer (i,d,u, etc)
 * @f: function pointer for conversion specifiers
 */

typedef struct format
{
	char *id;
	int (*f)();
} print_t;
int _printf(const char *format, ...);
int print_int(va_list, args);
int _putchar(char c);
#endif
