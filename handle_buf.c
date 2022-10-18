#include "main.h"

/**
 * handle_buf - concates characters
 * @buf: pointer
 * @c: character to concat
 * @ibuf: index of buffer pointer
 * Return: index of buffer pointer.
 */
unsigned int handle_buf(char *buf, char c, unsigned int ibuf)
{
	if (ibuf == 1024)
	{
		print_buff(buf, ibuf);
		ibuf = 0;
	}
	buf[ibuf] = c;
	ibuf++;
	return (ibuf);
}
