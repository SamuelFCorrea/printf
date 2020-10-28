#include "holberton.h"

/**
 * get_op_func - get the correct function
 * @c: input
 *
 * Return: on succes pointe to function
 */


int (*get_op_func(char c))(va_list)
{
format_t p_type[] = {
{'c', print_char},
{'s', print_string},
{'i', print_number},
{'d', print_number},
{'\0', NULL},
};
	unsigned int j;

	for (j = 0; p_type[j].type; j++)
		if (s == p_type[j].type)
			return (p_type[j].f);

	return (NULL);
}


/**
 * _printf - our own printf
 * @format: arguments
 *
 * Return: number of printed characters
 */

int _printf(const char *format, ...)
{
	va_list p_list;	
	unsigned int i, len = 0;
	int (*f)(va_list);

	va_start(p_list, format);
	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] != '%')
			{
				f = get_op_func(format[i + 1]);
				if (f != NULL)
				{
					len += f(p_list);
					i++;
				}
				else
				{
					write(1, &format[i], 1);
					len++;
				}
			}
			else
			{
				write(1, &format[i], 1);
				len++;
				i++;
			}
		}
		else
		{
			write(1, &format[i], 1);
			len++;
		}
	}
	va_end(p_list);
	return (len);
}
