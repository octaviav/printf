#include "main.h"

/**
 *  printf_specifier – this functn links format specs
 *
 *
 *  @format: F spec
 *
 *
 *  Return: Type of specs
 */


int (*printf_specifier(char format))(va_list)
{
	int m;

	spec_type type[] = {
		{"i", get_int},
		{"d", get_int},
		{"u", get_unsigned},
		{"c", get_char},
		{"s", get_string},
		{"r", get_reverse},
		{"x", get_hex},
		{"X", get_heX},
		{"b", get_binary},
		{"o", get_octal},
		{"R", get_rot13},
		{"%", get_percent},
		{NULL, NULL}
	};

	for (m = 0; type[m].spec != NULL; m++)
	{
		if (format == *type[m].spec)
		{
		return (type[m].f);
		}
	}
	return (NULL);
}

