#include "main.h"
#include <stdio.h>

int str_compare(char *, char *);

/**
 * print_p - Print num in hexa
 * @argus: Num
 *
 * Return: Length of the number
 **/
int print_p(va_list argus)
{
	int len;
	char *p;

	p = itoa(va_arg(argus, unsigned long int), 16);
	if (!str_compare(p, "0"))
	{
		return (print("(nil)"));
	}
	len = print("0x");

	if (!str_compare(p, "-1"))
	{
		len += print("ffffffffffffffff");
	}
	else
	{
		len += print(p);
	}
	return (len);
}

/**
 * str_compare - Compare two strings
 * @str1: String number 1
 * @str2: String number 2
 *
 * Return: Int number
 **/
int str_compare(char *str1, char *str2)
{
	int i;

	for (i = 0; str1[i]; i++)
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
	}

	return (0);
}
