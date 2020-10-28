#ifndef __FILE_H_
#define __FILE_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct format_s - struct
 * @type: <=
 * @f: function
 */

typedef struct format_s
{
	char type;
	int (*f)();
} format_t;

int _printf(const char *format, ...);

int (*funcstruct(char c))(va_list);

int _putchar(char c);

int print_char(va_list);

int print_string(va_list);

int print_int(va_list);

#endif
