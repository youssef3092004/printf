#include "main.h"

/**
 * handler - Format string handler
 * @str: format string
 * @argus: arguments
 *
 * Return: len of arguments with len of base string
 **/
int handler(const char *str, va_list argus)
{
	int len = 0;
	int var;
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == '%')
		{
			var = percent_handler(str, argus, &i);
			if (var == -1)
			{
				return (-1);
			}
			len += var;
			continue;
		}

		_putchar(str[i]);
		len = len + 1;
	}
	return (len);
}

/**
 * percent_handler - percent format
 * @str: format
 * @argus: arguments
 * @num: Repetition number
 *
 * Return: Size of the numbers of elements printed
 **/
int percent_handler(const char *str, va_list argus, int *num)
{
	int size;
	int j, num_formats;
	form formats[] = {
		{'s', print_s}, {'c', print_c}, {'d', print_i},
		{'i', print_i}, {'b', print_b}, {'u', print_u},
		{'o', print_o}, {'x', print_hex}, {'X', print_HEX},
		{'p', print_p}, {'r', print_rev}, {'R', print_rot}
	};

	*num = *num + 1;

	if (str[*num] == '\0')
	{
		return (-1);
	}

	if (str[*num] == '%')
	{
		_putchar('%');
		return (1);
	}

	num_formats = sizeof(formats) / sizeof(formats[0]);
	for (size = j = 0; j < num_formats; j++)
	{
		if (str[*num] == formats[j].id)
		{
			size = formats[j].fun(argus);
			return (size);
		}

	}
	_putchar('%'), _putchar(str[*num]);
	return (2);
}

