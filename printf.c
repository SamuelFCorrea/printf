#include "holberton.h"
/**
 * _printf - printf s,c and %
 * @format: print
 * Return: chars o total
 */
int _printf(const char *format, ...)
{
va_list list;
unsigned int i = 0, characters_number = 0;
int (*f)(va_list);
if (!format)
return (-1);
va_start(list, format);
for (i = 0; format[i] != '\0'; i++)
{
if (format[i] == '%')
{
if (format[i + 1] == '/0')
return (-1);
else if (format[i + 1] == '%')
{
_putchar('%');
characters_number++;
i++;
}
else if (cmp_func(format[i + 1]) != NULL)
{
characters_number += (cmp_func(format[i + 1]))(list);
i++;
}
else
{
_putchar(format[i]);
characters_number++;
}
}
else
{
_putchar(format[i]);
characters_number++;
}
}
va_end(list);
return (characters_number);
}
