#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * printf_string - this functn prnts a str. 
 * @val: str. 
 * * Return: 0
 */

int printf_string(va_list val)
{
	char *ptr;
	int m;
	int lth;
	ptr = va_arg(val, char *);
	if (ptr == NULL)
   	{
		ptr = "(null)";
		lth = _strlen(ptr);
		for (m = 0; m < lth; m++)
			_putchar(ptr[m]);
		return (lth);
	}
	else
	{
		lth = _strlen(ptr);
		for (m = 0; m < lth; m++)
		_putchar(ptr[m]);
		return (lth);
	}
}
