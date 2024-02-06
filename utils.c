#include "main.h"
/**
 * _strlen - length of a string
 * @string: list of strings
 * Return: Length
 **/
int _strlen(const char *string)
{
	int index;

	for (index = 0; string[index] != 0; index++)
		;
	return (index);
}

/**
 * print - print char using _putchar.
 * @string: string.
 *
 * Return: length.
 */

int print(char *string)
{
	int i;

	for (i = 0; string[i]; ++i)
		_putchar(string[i]);

	return (i);
}

