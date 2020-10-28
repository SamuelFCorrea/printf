#include "holberton.h"

/**
 * _printf - a try to do the same
 * @format: values
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list arg;
	int i, r, p = 0;
	new_t *new;

	new = malloc(sizeof(new_t));
	if (new == NULL)
		return (1);

	va_start(arg, format);
	(*new).charprinted = 0;
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
			i += def_type(format + i, new, arg);
		if (format[i] == '%')
			i--;
		else
		{
			write(1, format + i, 1);
			p++;
		}
	r = p + (*new).charprinted;
	}
	return (r);
}
