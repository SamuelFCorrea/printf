#include "holberton.h"

/**
 * _printchar - print char and strings
 * @arg: argument to print
 * @new: structure to read the instructions
 *
 * Return: number of characters printed
 */

void _printchar(va_list arg, new_t *new)
{
	int i, ff, m = 0;

	ff = (*new).width;
	for (i = 0; (*new).flags[i]; i++)
		if ((*new).flags[i] == '-')
			m = 1;
	if ((*new).specifier == 'c')
	{
		if (m == 0)
		for (i = 0; i < ff - 1; i++)
			write(1, " ", 1);
		const int aux = va_arg(arg, int);

		write(1, &aux, 1);
	}
	else if ((*new).specifier == 's')
	{
		char *str = va_arg(arg, char *);

		if (m == 0)
		{
		for (i = 0; *(str + i); i++)
			;
		if (ff > i)
			for (; i < ff; i++)
			write(1, " ", 1);
		}
		for (i = 0; *(str + i); i++)
			write(1, str + i, 1);
	}
	if (m == 1)
	for (; i < ff; i++)
		write(1, " ", 1);
	(*new).charprinted = i;
}

/**
 * _printinteger - print signed and unsigned integers
 * @arg: argument to print
 * @new: structure to read the instructions
 *
 * Return: number of characters printed
 */

void _printinteger(va_list arg, new_t *new)
{
	(void)arg;
	(void)new;
	printf("integer");
}

/**
 * _scientific - print scientific notation
 * @arg: argument to print
 * @new: structure to read the instructions
 *
 * Return: number of characters printed
 */

void _scientific(va_list arg, new_t *new)
{
	(void)arg;
	(void)new;
	printf("scientific");
}

/**
 * _printfloat - print signed and unsigned float
 * @arg: argument to print
 * @new: structure to read the instructions
 *
 * Return: number of characters printed
 */

void _printfloat(va_list arg, new_t *new)
{
	(void)arg;
	(void)new;
	printf("float");
}

/**
 * _printeshort - print a short version of E and e
 * @arg: argument to print
 * @new: structure to read the instructions
 *
 * Return: number of characters printed
 */

void _printeshort(va_list arg, new_t *new)
{
	(void)arg;
	(void)new;
	printf("E but this is shortest");
}
