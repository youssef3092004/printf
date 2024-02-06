#include "main.h"

/**
 * print_i - Print num in base 10
 * @argus: The number to print
 *
 * Return: Length of th numbers in decimal
 **/
int print_i(va_list argus)
{
	int len;
	char *p;

	p = itoa(va_arg(argus, int), 10);
	if (p != NULL)
	{
		len = print(p);
	}
	else
	{
		len = print("NULL");
	}
	return (len);
}
