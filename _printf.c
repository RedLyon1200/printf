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
	va_list arg;
        unsigned int i = 0, j = 0;

	print_t print[] = {
		{"c", print_c}, {"s", print_s},
	};

	va_start(arg, format);

	if (format == NULL)
		return (0);

	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '%')
		{
			while (print[j].p != NULL)
			{
				if (format[i + 1] == print[j].print[0])
				{
					len = len + print[j].p(arg);
					flag = 1;
					i++;
				}
				j++;
			}
		}
	}
	return (0);
}
