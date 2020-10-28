#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

/**
 *struct types - estructura especifica para la funcion
 * @p: puntero para caracteres
 * @func : funcion para imprimir las funciones
 */

typedef struct types
{
char *flags;
int width;
int precision;
char length;
char specifier;
int charprinted;
} new_t;


int _putchar(char);
int _printf(const char *, ...);
int _atoi(const char *, new_t *);
int _pre(const char *);
new_t *_init(const char *);
int def_type(const char *, new_t *, va_list);
void _flags(const char *, int, new_t *);
void _length(const char *, int, new_t *);
void _printchar(va_list arg, new_t *);
void _printinteger(va_list arg, new_t *);
void _scientific(va_list arg, new_t *);
void _printfloat(va_list arg, new_t *);
void _printeshort(va_list arg, new_t *);
void _printoctal(va_list arg, new_t *);
void _printhexa(va_list arg, new_t *);
void _printpointer(va_list arg, new_t *);
char *duplicate(char *);


#endif
