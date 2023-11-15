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
<<<<<<< HEAD
			length = length + print_space(value);
=======
			length = length + print_space2(value);
>>>>>>> d75d7d46fac2088c076dcd21f58ae5c39865d6a1
		}
		else
		{
			_putchar(h[j]);
			length++;
		}
	}
	return (length);
}
