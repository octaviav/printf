#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdarg.h>

/**
 * print_char -result of a char
 * @types: result or arg.
 * @buffer: handles printing
 * @flags:  total flags
 * @width: width
 * @precision: Precision specification
 * @size: specifies the size
 * Return: total characters
 */
int print_char(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	char c = va_arg(types, int);

	return (handle_write_char(c, buffer, flags, width, precision, size));
}
