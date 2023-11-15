#include "main.h"

/**
 * print_c - output char
 * @val: parameters
 * Return: val
 */
int print_c(va_list val)
{
	char nm;

	nm = va_arg(val, int);
	_putchar(nm);
	return (1);
}
