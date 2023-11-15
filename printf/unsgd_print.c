#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * print_unsgd - output int
 * @args: parameter to print
 * Return: int
 */
int print_unsgd(va_list args)
{
	unsigned int x = va_arg(args, unsigned int);
	int nom, last = x % 10, digit, exp = 1;
	int  o = 1;

	x = x / 10;
	nom = x;

	if (last < 0)
	{
		_putchar('-');
		nom = -nom;
		x = -x;
		last = -last;
		o++;
	}
	if (nom > 0)
	{
		while (nom / 10 != 0)
		{
			exp = exp * 10;
			nom = nom / 10;
		}
		nom = x;
		while (exp > 0)
		{
			digit = nom / exp;
			_putchar(digit + '0');
			nom = nom - (digit * exp);
			exp = exp / 10;
			o++;
		}
	}
	_putchar(last + '0');

	return (o);
}
