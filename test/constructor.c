#include "holberton.h"

/**
 * _flags - determinate the flag arguments
 * @str: input
 * @l: command lenght
 * @cons: structure to save the data
 *
 * Return: none
 */

void _flags(const char *str, int l, new_t *cons)
{
	char flags[] = {'-', '+', ' ', '#', '0'};
	int i, j, c = 0, au = 0;
	char *a;

	for (i = 1; i < l; i++)
	{
	for (j = 0; *(flags + j); j++)
	{
		if (flags[j] == *(str + i))
		{
			au = 0;
			c += 1;
			break;
		}
		else
			au = 1;
	}
	if (au == 1)
		break;
	}

	a = malloc(c * sizeof(char) + 1);
	(*cons).flags = malloc(c * sizeof(char) + 1);
	if (a == NULL || (*cons).flags == NULL)
		return;
	*(a + c) = '\0';
	for (i = 1, au = 0; i < c + 1; i++)
	for (j = 0; flags[j]; j++)
		if (flags[j] == *(str + i))
		{
			*(a + au) = flags[j];
			au++;
		}
	(*cons).flags = a;
}

/**
 * _length - determinate the length arguments
 * @str: input
 * @l: command lenght
 * @cons: structure to save the data
 *
 * Return: none
 */

void _length(const char *str, int l, new_t *cons)
{
	char length[] = {'h', 'l', 'L'};
	int i, j;

	(*cons).length = '\0';
	for (i = 0; i < l; i++)
	for (j = 0; length[j]; j++)
		if (length[j] == *(str + i))
			(*cons).length = length[j];
}

/**
 * _atoi - determinate the min number of characters to print
 * @s: input
 * @new: structure to avoid any flag
 *
 * Return: number in the input
 */

int _atoi(const char *s, new_t *new)
{
	unsigned int i = 0, j, aux = 1, l = 0, lnum, k;
	int num = 0, mat = 0;

	while (*(s + l) != '\0')
		l++;
	if ((*new).flags)
	while ((*new).flags[i])
	{
		if ((*new).flags[i] == '0')
			mat = 1;
		i++;
	}
	for (i = 0; i < l; i++)
	{
		if ((*(s + i) - '0' <= 9 && *(s + i) - '0' >= 0) && mat != 1)
			break;
		if (*(s + i) == '0' && mat == 1)
			mat = 0;
	}
	for (j = i; j < l; j++)
	{
		if (*(s + j) - '0' <= 9 && *(s + j) - '0' >= 0)
			;
		else
			break;
	}
	lnum = j - i;
	for (k = 1; k < lnum; k++)
		aux *= 10;
	for (k = 0; k < lnum; k++, aux /= 10)
		num += (aux * (*(s + (i + k)) - '0'));
	return (num);
}

/**
 * _pre - determinate the precision of the number
 * @s: input
 *
 * Return: number in the input
 */


int _pre(const char *s)
{
	unsigned int i = 0, j, aux = 1, l = 0, lnum, k;
	int num = 0;

	while (*(s + l) != '\0')
		l++;
	for (i = 0; i < l; i++)
		if (*(s + i) == '.')
			break;
	i++;
	for (j = i; j < l; j++)
	{
		if (*(s + j) - '0' <= 9 && *(s + j) - '0' >= 0)
			;
		else
			break;
	}
	lnum = j - i;
	for (k = 1; k < lnum; k++)
		aux *= 10;
	for (k = 0; k < lnum; k++, aux /= 10)
		num += (aux * (*(s + (i + k)) - '0'));
	return (num);
}

/**
 * duplicate - duplicate a string
 * @s: input
 *
 * Return: pointer to a new string
 */


char *duplicate(char *s)
{
	int i;
	char *r;

	for (i = 0; *(s + i); i++)
		;
	r = malloc(i * sizeof(char) + 1);
	if (r == NULL)
		return (NULL);
	for (i = 0; *(s + i); i++)
		*(r + i) = *(s + i);
	*(r + i) = '\0';
	return (r);
}
