#include "main.h"
/**
 * itoa - int to ascii
 * @number: number
 * @base: base
 *
 * Return: char
 **/
char *itoa(long int number, int base)
{
	static char buffer[50];
	static char *arr = "0123456789abcdef";
	char *p;
	unsigned long n = number;
	char sign = 0;

	if (number < 0)
	{
		n = -number;
		sign = '-';
	}
	p = &buffer[49];
	*p = '\0';

	do {
		*--p = arr[n % base];
		n /= base;
	} while (n != 0);

	if (sign)
	{
		*--p = sign;
	}
	return (p);
}
