#ifndef PRINTF_H
#define PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct print - printer functions
 * @type_arg: identifier
 * @func: function pointer
 */

typedef struct print
{
	char *type_arg;
	int (*func)(va_list, char *,  unsigned int);
} print_t;

int _printf(const char *format, ...);
int print_prg(va_list __attribute__((unused)), char *, unsigned int);
int print_func(const char *s, int index);
unsigned int handle_buf(char *buf, char c, unsigned int ibuf);
int print_buff(char *buf, unisigned int nbuf);
int (*get_print_func(const char *s, int index))(va_list, char *, unsigned int);
int print_int(va_list arguments, char *buf, unsigned int ibuf);
#endif
