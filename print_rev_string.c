#include "main.h"
/**
 * print_rev - Print reverse string
 * @argus: number of arguments
 * Return: Length
 **/
int  print_rev(va_list argus)
{
	int i;
	int len;
	const char *str;

	str = va_arg(argus, const char *);

	len = _strlen(str);

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	return (len);
}
