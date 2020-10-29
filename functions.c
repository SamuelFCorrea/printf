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
	int r;
	char *s;

	s = va_arg(arg, char *);
	if (!s)
	s = "(null)";
	for (r = 0; s[r]; r++)
	_putchar(s[r]);
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
	int i = 0, n;

	n = va_arg(arg, int);
	if (!n)
	{
		_putchar('0');
		return (1);
	}
	printnumber(n);
	if (n < 0)
		i++;
	for (; n != 0; i++)
		n /= 10;
	return (i);
}

/**
 * printnumber - print a number
 * @n: number
 *
 * Return: none
 */

void printnumber(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n == 0)
		_putchar('0');

	if (n / 10)
		printnumber(n / 10);

	_putchar((n % 10) + '0');
}
