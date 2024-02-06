#include "main.h"
/**
 * _printf - Printed on the basis specified for the type of publication
 * @format: character string
 * Return: number of characters printed excluding null byte
 **/
int _printf(const char *format, ...)
{
	int len;
	va_list argus;

	if (format == NULL)
	{
		return (-1);
	}

	len = _strlen(format);
	if (len <= 0)
	{
		return (0);
	}

	va_start(argus, format);
	len = handler(format, argus);

	_putchar(-1);

	va_end(argus);
	return (len);
}
