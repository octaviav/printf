#include "main.h"

/**
 * printf_rot13 – this functn prnts rot13
 *
 *
 * @arg: va_list r13
 *
 *
 * Return: R13 Int
 */

int printf_rot13(va_list args)
{
	int m;
	int k;
	int f;
	int count = 0;

	char input[80] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[80] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	char *rot = va_arg(arg, char*);

	for (m = 0; rot[m]; m++)
	{
		f = 0;
		for (k = 0; input[k] && !f; k++)
		{
			if (rot[m] == input[k])
			{
				_putchar(output[k]);
				count++;
				f = 1;
			}
		}
		if (!f)
		{
			_putchar(rot[m]);
			count++;
		}
	}
	return(count);
}

/**
 *  printf_unsigned – this functn prnts unsigned int
 *
 *
 *  @arg: va_list un int
 *
 *
 *  Return: un Int
 */


int printf_unsigned(va_list args)
{
	int idx = 0;
	int s = 0;
	int dgt, last_digit;
	int div = 1000000000;

	unsigned int num = va_arg(arg, unsigned int);

	while (div > 1)
	{
		dgt = (num / div) % 10;
		s += dgt;

		if (s != 0)
		{
			_putchar(dgt + '0');
			idx++;
		}
		div /= 10;
	}
	last_digit = num % 10;
	_putchar(last_digit + '0');
	idx++;

	return (idx);
}

/**
 * printf_octal – this functn prnts octal.
 *
 *
 * @arg: va_list oct.
 *
 *
 * Return: Oct Int
 */

int printf_octal(va_list args)
{
	int m = 0;
	int k = 0;

	char octal[50];
	unsigned int getOctal = va_arg(arg, unsigned int);

	if (getOctal == 0)
	{
		octal[m] = (0 + '0');
		m++;
	}

	while (getOctal != 0)
	{
		octal[m] = (getOctal % 8) + '0';
		getOctal /= 8;
		m++;
	}
 	for (m = m - 1; m >= 0; m--)
	{
		_putchar(octal[m]);
		k++;
	}
	return (k);
}
