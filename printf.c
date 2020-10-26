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
