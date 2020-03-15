#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_c - prints the character c
 * @arg: character to print
 *
 * Return: number of characters printed
 */
int print_c(va_list arg)
{
	char c;

        c = va_arg(arg, int);
	_putchar(c);

	return (1);
}


/**
 * p_str - prints string s
 * @arg: string to print
 * Return: number of characters printed
 */
int p_str(va_list arg)
{
	unsigned int i;
	char *s;

	s = va_arg(arg, char *);

	i = 0;

	if (s == NULL)
		s = "(null)";

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}

	return (i);
}
