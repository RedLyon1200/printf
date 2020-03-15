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
