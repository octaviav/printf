#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * print_str - outputs string
 * @val: parameter
 * Return: length
 */
int print_str(va_list val)
{
	char *str;
	int k;
	int length;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str = "(null)";
		length = _strlen(str);
		for (k = 0; k < length; k++)
			_putchar(str[k]);
		return (length);
	}
	else
	{
		length = _strlen(str);
		for (k = 0; k < length; k++)
			_putchar(str[k]);
		return (length);
	}
}
