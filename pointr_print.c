#include "main.h"
#include <stdio.h>

/**
 * print_ptr - prints a hexgecimal number.
 * @val: arguments in code
 * Return: counter
 */
int print_ptr(va_list val)
{
	void *p;
	char *s = "(nil)";
	long int d;
	int a;
	int v;

	p = va_arg(val, void*);
	if (p == NULL)
	{
		for (v = 0; s[v] != '\0'; v++)
		{
			_putchar(s[v]);
		}
		return (v);
	}

	d = (unsigned long int)p;
	_putchar('0');
	_putchar('d');
	a = print_space(d);
	return (a + 2);
}
