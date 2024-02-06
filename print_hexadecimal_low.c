#include "main.h"

/**
 * print_hex - Print a number in hexadecimal
 * @argus: Number of arguments to print
 * Return: Length
 **/
int print_hex(va_list argus)
{
	int len;
	char *p;

	p = itoa(va_arg(argus, unsigned int), 16);

	len = print((p != NULL) ? p : "NULL");
	return (len);
}
