#include "main.h"
/**
 * print_s - Print string
 * @argus: list of strings
 *
 * Return: length
 */
int print_s(va_list argus)
{
	char *str;
	int len;

	str = va_arg(argus, char*);
	if (str != NULL)
	{
		len = print(str);
	}
	else
	{
		len = print("(null)");
	}
	return (len);
}

