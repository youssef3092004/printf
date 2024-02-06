#include "main.h"

int is_lowercase(char);
char *string_to_upper(char *);

/**
 * print_HEX - Print a number in hexadecimal
 * @argus: Number of arguments to print
 * Return: Length
 **/
int print_HEX(va_list argus)
{
	char *p;
	int len;

	p = itoa(va_arg(argus, unsigned int), 16);
	p = string_to_upper(p);

	len = print((p != NULL) ? p : "NULL");

	return (len);
}

/**
 * is_lowercase - Check the char in lowercase or not
 * @car: Character
 * Return: 1 or 0
 **/
int is_lowercase(char car)
{
	return (car >= 'a' && car <= 'z');
}

/**
 * string_to_upper - uppercase string
 * @str: String
 * Return: String in uppercase
 **/
char *string_to_upper(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (is_lowercase(str[i]))
			str[i] = str[i] - 32;
	}
	return (str);
}

