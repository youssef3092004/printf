#include "main.h"
/**
 * print_b - Print number in binary
 * @argus: list of arguments
 * Return: Length
 **/
int print_b(va_list argus)
{
	char *p;
	int len;

	p = itoa(va_arg(argus, unsigned int), 2);

	len = print(p);
	return (len);
}
