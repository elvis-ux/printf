#include "main.h"

/**
 * _putchar - prints character c to stdout
 * @c: character to print
 * Return: success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
