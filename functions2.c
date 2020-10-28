#include "holberton.h"

/**
 * _printoctal - print octal values
 * @arg: argument to print
 * @new: structure to read the instructions
 *
 * Return: number of characters printed
 */

void _printoctal(va_list arg, new_t *new)
{
	(void)arg;
	(void)new;
	printf("octal");
}

/**
 * _printhexa - print hexadecimal values
 * @arg: argument to print
 * @new: structure to read the instructions
 *
 * Return: number of characters printed
 */

void _printhexa(va_list arg, new_t *new)
{
	(void)arg;
	(void)new;
	printf("hexa");
}

/**
 * _printpointer - print pointers
 * @arg: argument to print
 * @new: structure to read the instructions
 *
 * Return: number of characters printed
 */

void _printpointer(va_list arg, new_t *new)
{
	(void)arg;
	(void)new;
	printf("pointer");
}
