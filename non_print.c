#include "main.h"
/**
 * print_non_string - print non printable string.
 * @val: parameter.
 * Return: integer.
 */

int print_non_string(va_list val)
{
	char *j;
	int h, length = 0;
	int value;

	j = va_arg(val, char *);

	if (j == NULL)
		j = "(null)";
	for (h = 0; j[h] != '\0'; h++)
	{
		if (j[h] < 32 || j[h] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			length = length + 2;
			value = j[h];
			if (value < 16)
			{
				_putchar('0');
				length++;
			}
			length = length + print_hexxx(value);
		}
		else
		{
			_putchar(h[j]);
			length++;
		}
	}
	return (length);
}
