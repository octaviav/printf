#include "main.h"

/**
* printf_binary -  this functn changs to hexD uppcase
*
*
* @arg: va_list hexD
*
*
* Return: HexD
*/

int printf_binary(va_list args)
{
	unsigned int in, by;
	unsigned int bit_count[32];

	unsigned int num = va_arg(arg, int);

	in = 0;
	by = 0;

	if (num < 1)
	{
		_putchar (48);
		in++;
		return (in);
	}

	while (num > 0)
	{
		bit_count[in] = num % 2;
		num /= 2;
		in++;
	}

	for (by = in - 1; by > 0; by--)
	{
		_putchar('0' + bit_count[by]);
	}
	_putchar('0' + bit_count[by]);

	return (in);
}

/**
* printf_hex – this functn chngs to hexD lwrcase.
*
*
* @arg: va_list hexD
*
*
* Return: HexD val
*/

int printf_hex(va_list args)
{
	unsigned int hex_convert = va_arg(arg, unsigned int);

	int m = 0;
	int k = 0;
	int x = 0;
	int p = 0;

	char hex_array[48];

	while (hex_convert != 0)
	{
		p = 0;

		p = hex_convert % 16;

		if (p < 10)
		{
			hex_array[m] = p + 48;
			m++;
		}
		else
		{
			hex_array[m] = p + 87;
			i++;
		}
		hex_convert /= 16;
	}
	x = 0;

	for (k = m - 1; k >= 0;  k--)
	{
		_putchar(hex_array[k]);
		x++;
	}
	return (x);
}

/**
* print f_heX – this funcn chngs to hexD uppcase.
*
*
* @arg: va_list hexD
*
*
* Return: HexD
*/


int printf_heX(va_list args)
{
	unsigned int hex_convert = va_arg(arg, unsigned int);

	int m = 0;
	int k = 0;
	int x = 0;
	int p = 0;
	
	char hex_array[48];

	while (hex_convert != 0)
	{
		p = 0;

		p = hex_convert % 16;

		if (p < 10)
		{
			hex_array[i] = p + 48;
			m++;
		}
		else
		{
			hex_array[i] = p + 55;
			m++;
		}
		hex_convert /= 16;
	}
	x = 0;

	for (k = m - 1; k >= 0;  k--)
	{
		_putchar(hex_array[j]);
		x++;
	}
	return (x);
}

/**
 * printf_reverse – this functn shws the ptr of val.
 *
 * @arg: val for str ptr.
 *
 *
 * Return: r string
 */

int printf_reverse(va_list args)
{
	int i = 0;
	int lgth = 0;
	
	char *ptr = va_arg(arg, char*);

	if (ptr == NULL)
	{
		return (0);
	}

	while (ptr[lgth] != '\0')
	{
		i++;
		lgth++;
	}
	lgth--;

	while (lgth >= 0)
	{
		_putchar(ptr[lgth]);
		lgth--;
	}
	return (i);
}


