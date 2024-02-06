#include "main.h"
/**
 * print_u - Print a unsigned integer
 * @argus: list of arguments
 *
 * Return: Length of the number
 **/
int print_u(va_list argus)
{
	int len;
	char *p;

	p = itoa(va_arg(argus, unsigned int), 10);

	len = print((p != NULL) ? p : "NULL");
	return (len);
}
