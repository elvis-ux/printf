#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct print - printer functions
 * @type_arg: identifier
 * @f: function pointer
 */

typedef struct print
{
	char *type_arg;
	int (*f)(va_list, char *, unsigned int);
} print_t;

int _printf(const char *format, ...);
int print_int(va_list arguments, char *buf, unsigned int ibuf);
int (*get_print_func(const char *s, int index))(va_list, char *, unsigned int);
int print_func(const char *s, int index);
unsigned int handle_buff(char *buf, char c, unsigned int ibuf);
int print_buff(char *buf, unsigned int nbuf);

#endif
