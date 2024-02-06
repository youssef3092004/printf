#include "main.h"
/**
 * rot13 - String encryption with rot13.
 * @str: String encryption
 * Return: encryption String
 */
int rot13(char *str)
{
	int i;
	int j;
	char *a;
	char *b;

	a = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	b = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; a[j]; j++)
		{
			if (str[i] == a[j])
			{
				_putchar(b[j]);
				break;
			}
		}
		if (!a[j])
		{
			_putchar(str[i]);
		}
	}
	return (i);
}

/**
 * print_rot - Prints rot13 String encryption
 * @argus: encryption string
 * Return: Length
 **/
int print_rot(va_list argus)
{
	int len;
	char *p;

	p = va_arg(argus, char *);

	len = rot13((p != NULL) ? p : "(NULL)");
	return (len);
}
