#include "holberton.h"

int main()
{
	char *s = "lorem";
	int a, b;
	a = printf("%-12s\n", s);
	b =_printf("%-12s\n", s);
	printf("orignal = %d || own = %d\n", a, b);
	return 0;
}
