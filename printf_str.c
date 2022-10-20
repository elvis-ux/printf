#include "main.h"
/**
 * _strlen - the length of a string
 * @s: pointer to char
 * Return: c
 */

int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);
}
/**
 * _strlenc - strlen func
 * @s: pointer to char
 * Return: c
 */

int _strlenc(const char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);
}
