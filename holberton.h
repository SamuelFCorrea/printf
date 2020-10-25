B#ifndef HOLBERTON_H
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

int _putchar(char c);
int _printf(const char *format, ...);
int atoi(const char *str);
