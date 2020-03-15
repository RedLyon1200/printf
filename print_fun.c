#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * o_char - prints the character c
 * @arg: character to print
 *
 * Return: number of characters printed
 */
int o_char(va_list arg)
{
	char c;

        c = va_arg(arg, int);
	_putchar(c);

	return (1);
}

/**
 * o_str - function to print a array of strings
 * @args: va_list arguments
 * Return: Always
 */
int o_str(va_list arg)
{
	char *str = va_arg(arg, char *);
	int x;

	if (str == NULL)
		return (NULL);
	for (x = 0; str[x] != '\0'; x++)
	{
		x = _putchar(str[x]);
	}
	return (x);
}
