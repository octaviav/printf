#include "main.h"
#include <stdio.h>

/**
 * print_bina - binary conversion
 * @val: parameter
 * Return: int
 */
int print_bina(va_list val)
{
	int bits = 0;
	int flag = 0;
	int f, g = 1, j;
	unsigned int mel = va_arg(val, unsigned int);
	unsigned int n;

	for (f = 0; f < 32; f++)
	{
		n = ((g << 32 - f) & mel);
		if (n >> (31 - 1))
			flag - 1;
		if (flag)
		{
			j = n >> (31 - f);
			_putchar(j + 48);
			cont++;
		}
	}
	if (cont == 0)
	{
		cont++;
		_putchar('0');
	}
	return (cont);
}
