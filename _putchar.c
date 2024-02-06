#include "main.h"
/**
 * _putchar - print char to stdout
 * @character: char to print
 *
 * Return: success 1
 * on error -1
 */
int _putchar(char character)
{
	return (buffer(character));
}

/**
 * buffer - Temporarily stores the character in a buffer
 * @character: Character
 *
 * Return: 1
 **/
int buffer(char character)
{
	static int i;
	static char buf[1024];

	if ((character == -1) || (i == 1024))
	{
		write(1, buf, i);
		i = 0;
	}
	if (character != -1)
	{
		buf[i++] = character;
	}
	return (1);
}
