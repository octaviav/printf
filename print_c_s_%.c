#include "main.h"
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * print_char - character printer
 * @types: argumnts
 * @buffer: print handlr
 * @flags: flags calculator
 * @width: width printer
 * @precision: Precision specifier
 * @size: Size specification
 * Return: printed number of chars
 */
int print_char(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	char c = va_arg(types, int);

	return (handle_write_char(c, buffer, flags, width, precision, size));
}

/**
 * print_string - strings printr
 * @types: argumnts
 * @buffer: print handlr
 * @flags: flags calculator
 * @width: width printer
 * @precision: Precision specifier
 * @size: Size specification
 * Return: printed numbr of chars
 */
int print_string(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	int length = 0, z;
	char *str = va_arg(types, char *);

	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);
	if (str == NULL)
	{
		str = "(null)";
		if (precision >= 6)
			str = "      ";
	}

	while (str[length] != '\0')
		length++;

	if (precision >= 0 && precision < length)
		length = precision;

	if (width > length)
	{
		if (flags & F_MINUS)
		{
			write(1, &str[0], length);
			for (z = width - length; z > 0; z--)
				write(1, " ", 1);
			return (width);
		}
		else
		{
			for (z = width - length; z > 0; z--)
				write(1, " ", 1);
			write(1, &str[0], length);
			return (width);
		}
	}

	return (write(1, str, length));
}

/**
 * print_percent - prcnt sign print
 * @types: argumnts for code
 * @buffer: print handlr
 * @flags: flags calculator
 * @width: width printr
 * @precision: Precision specifier
 * @size: Size specification
 * Return: printed numbr of chars
 */
int print_percent(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	UNUSED(types);
	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);
	return (write(1, "%%", 1));
}
