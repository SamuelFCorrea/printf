#include "holberton.h"

/**
 * _sprintf - select the fuccin to use
 * @arg: argument list
 * @new: structure to read the info
 *
 * Return: number of characters printed
 */

void _sprintf(va_list arg, new_t *new)
{
	const int a = '%';

	switch ((*new).specifier)
	{
		case 'c':
		case 's':
			_printchar(arg, new);
				break;
		case 'd':
		case 'i':
		case 'u':
			_printinteger(arg, new);
				break;
		case 'e':
		case 'E':
			_scientific(arg, new);
				break;
		case 'f':
			_printfloat(arg, new);
				break;
		case 'g':
		case 'G':
			_printeshort(arg, new);
				break;
		case 'o':
			_printoctal(arg, new);
				break;
		case 'x':
		case 'X':
			_printhexa(arg, new);
				break;
		case 'p':
			_printpointer(arg, new);
				break;
		case 'n':
				break;
		case '%':
			write(1, &a, 1);
				break;
	}
}

/**
 * def_type - define the type of the instruccion
 * @str: main string
 * @new: structure to save the intruccions
 * @arg: argument list
 *
 * Return: length of the instruccion
 */

int def_type(const char *str, new_t *new, va_list arg)
{
	char spe[] = {'c', 'd', 'i', 'e', 'E', 'f', 'g', 'G',
	       'o', 's', 'u', 'x', 'X', 'p', 'n', '%'};
	int i, j, m = 0;

	for (i = 1; *(str + i); i++)
	{
	for (j = 0; spe[j]; j++)
	{
		if (spe[j] == *(str + i))
		{
			m = 1;
			break;
		}
	}
	if (m == 1)
		break;
	}
	i++;
	(*new).specifier = spe[j];
	_flags(str, i, new);
	_length(str, i, new);
	(*new).width = _atoi(str, new);
	(*new).precision = _pre(str);
	_sprintf(arg, new);
	return (i);
}
