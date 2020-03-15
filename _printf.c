#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * _printf - produces stdout according to a format
 * @format: string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
        unsigned int i = 0, j = 0;

	print_t print[] = {
		{"c", o_char}, {"s", o_str},
	};


	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '%')
		{
			while (
}
