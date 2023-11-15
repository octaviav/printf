#include <stdio.h>
#include "main.h"
#include <limits.h>

/**
 * _printf - results in accordance with a specified formats
 * @format - identifier for the arrangement of the argument
 * Return: total characters
 */
int _printf(const char *format, ...)
{
	smile s[] = {
		{"%c", print_c}, {"%s", print_str}, {"%%", print_37}, {"%d", printf_dec},
		{"%i", printf_int}, {"%r", print_srevs}, {"%R", print_13rot},
		{"%u", print_unsgd}, {"%o", printf_oct}, {"%x", print_hex},
		{"%X", print_hexx}, {"%S", print_non_string}, {"%p", print_ptr}
	};
	va_list args;
	int q = 0, x = 0;
	int z;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Spot:
	while (format[q] != '\0')
	{
	z = 12;
		while (z >= 0)
		{
			if (s[z].k[0] == format[q] && s[z].k[1] == format[q + 1])
			{
				x = x + s[z].u(args);
				q = q + 2;
				goto Spot;
			}
			z--;
		}
		_putchar(format[q]);
		q++;
		x++;
	}
	va_end(args);

	return (x);
}
