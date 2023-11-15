#include "main.h"
#include <stdio.h>
#include <limits.h>
/**
 * printf_int - returns integer
 * @args: parameter for code
 * Return: int
 */
int printf_int(va_list args)
{
	int m = va_arg(args, int);
	int mel, last = m % 10, digit, exp = 1;
	int  n = 1;

	m = m / 10;
	mel = m;

	if (last < 0)
	{
		_putchar('-');
		mel = -mel;
		m = -m;
		last = -last;
		n++;
	}
	if (mel > 0)
	{
		while (mel / 10 != 0)
		{
			exp = exp * 10;
			mel = mel / 10;
		}
		mel = m;
		while (exp > 0)
		{
			digit = mel / exp;
			_putchar(digit + '0');
			mel = mel - (digit * exp);
			exp = exp / 10;
			n++;
		}
	}
	_putchar(last + '0');

	return (n);
}
