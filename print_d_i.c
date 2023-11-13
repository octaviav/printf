#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * print_int - integr printed
 * @types: argmnts for code
 * @buffer: print handlr
 * @flags: flags calculator
 * @width:width printr
 * @precision: Precision specifier
 * @size: Size specification
 * Return: printed nmbr of chars
 */
int print_int(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	int g = BUFF_SIZE - 2;
	int is_negative = 0;
	long int v = va_arg(types, long int);
	unsigned long int num;

	v = convert_size_number(v, size);

	if (v == 0)
		buffer[g--] = '0';

	buffer[BUFF_SIZE - 1] = '\0';
	num = (unsigned long int)v;

	if (v < 0)
	{
		num = (unsigned long int)((-1) * v);
		is_negative = 1;
	}

	while (num > 0)
	{
		buffer[g--] = (num % 10) + '0';
		num /= 10;
	}

	g++;

	return (write_number(is_negative, g, buffer, flags, width, precision, size));
}

/**
 * print_binary - unsigned numbr
 * @types: argumnts
 * @buffer: print handlr
 * @flags: flags calculator
 * @width: width printr
 * @precision: Precision specifier
 * @size: Size specification
 * Return: printed nmbr of chars
 */
int print_binary(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	unsigned int s, t, u, sum;
	unsigned int a[32];
	int count;

	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);

	s = va_arg(types, unsigned int);
	t = 2147483648; /* (2 ^ 31) */
	a[0] = s / t;
	for (u = 1; u < 32; u++)
	{
		t /= 2;
		a[u] = (s / t) % 2;
	}
	for (u = 0, sum = 0, count = 0; u < 32; u++)
	{
		sum += a[u];
		if (sum || u == 31)
		{
			char z = '0' + a[i];

			write(1, &z, 1);
			count++;
		}
	}
	return (count);
}
