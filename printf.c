#include "holberton.h"
int (*get_op_func(char c))(va_list)
{
format_t p_type[] = {
{'c', print_char},
{'s', print_string},
{'i', print_number},
{'d', print_number},
{'\0', NULL},
};
unsigned int j;
for (j = 0; p_type[j].type != '\0'; j++)
{
if (s == p_type[j].type)
{
return (p_type[j].f);
}
}
return (NULL);
}
