#include "holberton.h"

int main()
{
	char *s = "lorem";
	int a, b;
	a = printf("%s%c\n", s, 'c');
	b =_printf("%s%c\n", s, 'c');
	printf("orignal = %d || own = %d\n", a, b);
	return 0;
}
