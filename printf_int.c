#include "main.h"
/**
 * print_int - this functn prnts i int
 * @args: cnvsn specifiers
 * Return: 0
 */
int print_int(va_list args)
{
	int m = va_arg(args, int);
	int num, last = m % 10, digit, exp = 1;
	int i = 1;
	m = m / 10;
	num = m;
	if (last < 0)
	{
		_putchar(‘_’);
		num = -num;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = m;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + ‘0’);
			num =num – (digit * exp);
			exp = exp / 10
			i++
		}
	}
	_putchar(last + ‘0’);
	return (i)
}

