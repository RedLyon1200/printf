#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"
/**
 * _printf - produces output according to a format
 * @format: character string
 * Return: number of characters printed excluding null byte
 */
int _printf(const char *format, ...)
{
    /* declaro variables breve nea */
	va_list arg;
	unsigned int i, j, flag;
	unsigned int len = 0;
    /* Llamo a la esctructura la cual se le asigno el nombre de print_t*/
    /* se crea un array, llamado print con el tipo de dato de la estuctura print_t */
	print_t print[] = {
		{"c", print_char}, {"s", print_string}, {"d", print_decimal}, {"i", print_int},
		{NULL, NULL}
	};
    /* Aca inicia el variable function */
	va_start(arg, format);
    /* Si format es igual nulo o formato en la posicion 0 es igual a % y formato en la posicion 1 es igual a dato nulo, retorna 0 */
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (0);

	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '%')
		{
			j = 0;
			flag = 0;
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
			if (flag == 0)
			{
				_putchar(format[i]);
				len = len + 1;
			}
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar('%');
			i++;
			len = len + 1;
		}
		else
		{
			_putchar(format[i]);
			len = len + 1;
		}
		i++;
	}
	va_end(arg);
	return (len);
}
