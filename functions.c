#include "holberton.h"

/**
 * _putchar - put char
 * @c: char to print
 *
 * Return: on succes 1
 */

int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

/**
 * print_char - print a char
 * @arg: argument to print
 *
 * Return: on succes 1
 */

int print_char(va_list arg)
{
	int r = 0;

	r += _putchar(va_arg(arg, int));
	return (r);
}

/**
 * print_string - print a string
 * @arg: argument to print
 *
 * Return: on succes lengt of the printed string
 */

int print_string(va_list arg)
{
	int i, r = 0;
	char *s = va_arg(arg, char *);

	for (i = 0; *(s + i); i++)
		r += _putchar(*(s + i));
	return (r);
}

/**
 * print_int - print integer
 * @arg: arguments
 *
 * Return: length of the int
 */

int print_int(va_list arg)
{
	int i, j, aux, n, o = 1;

	aux = va_arg(arg, int);
	n = aux;

	for (i = 0; aux != 0; i++, aux /= 10, o *= 10)
		;
	for (j = 0; j < i; j++)
		if (i > 1)
		_putchar((n / o) + '0');
	_putchar((n % 10) + '0');
	return (i);
}
