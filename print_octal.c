#include "main.h"
/**
 * print_o - Print an octal unm
 * @argus: list of arguments
 * Return: Length
 **/
int print_o(va_list argus)
{
	int len;
	char *p;

	p = itoa(va_arg(argus, unsigned int), 8);

	len = print((p != NULL) ? p : "NULL");
	return (len);
}
