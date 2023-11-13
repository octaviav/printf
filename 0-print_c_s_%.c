#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

/**
 * print_char - this functn is cnvsn specifier c
 * @types: first arg
 * @charbuffer: second Arg
 * Return: 0
 */

int print_char(va_list, types, charbuffer[])
{
	int flags;
	int width;
	int precision;
	int length;

	char c = va_arg(types, int);

	return (handle_write_char(c, flags, width, precision, size))

}

/**
 * printf_string - this functn prnts a str.
 * @val: str.
 * * Return: 0
 */

int printf_string(va_list val)
{
	char *ptr;
	int m;
	int lth;

	ptr = va_arg(val, char *);

	if (ptr == NULL)
	{
		ptr = "(null)";
		lth = _strlen(ptr);
		for (m = 0; m < lth; m++)
			_putchar(ptr[m]);
		return (lth);
	}
	else
	{
		lth = _strlen(ptr);
		for (m = 0; m < lth; m++)
		_putchar(ptr[m]);
		return (lth);
	}
}

/**
 * print37 - writes a % funct.
 * Return: On success 0.
 */

int print37(void)
{
	_putchar(37);
	return (0);
}
