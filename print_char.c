#include "main.h"
/**
 * print_c - print character
 * @argus: va_list
 *
 * Return: 1
 */
int print_c(va_list argus)
{
	int c = va_arg(argus, int);

	_putchar(c);
	return (1);
}
