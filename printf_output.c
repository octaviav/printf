#include <stdio.h>
#include "main.h"

/**
 * _printf - main function
 * @format: format
 * Return: 0
 */
int _printf(const char *format, ...)
{
	int i,
	int (flags, width, precision, size, buff_ind = 0);
	va_list list;
	char buffer[BUFSIZ];

	if (format == NULL)
		return (-1);

	va_start(list, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[buff_ind++] = format[i];
			if (buff_ind == BUFSIZ)
				print_buffer(buffer, &buff_ind);
			/* write(1, &format[i], 1);*/
			printf_char++;
		}
		else
		{
			print_buffer(buffer, &buff_ind);
			flags = get_flags(format, &i);
			width = get_width(format, &i, list);
			precision = get_precision(format, &i, list);
			size = get_size(format, &i);
			++i;
			print37 = handle_print(format, &i, list, buffer,
			flags, width, precision, size);
	
		}
	}

	print_buffer(buffer, &buff_ind);

	va_end(list);

	return (printf_char);
	

	void print_buffer(char buffer[], int *buff_ind);
	{
		if (*buff_ind > 0)
			fwrite(1, &buffer[0], *buff_ind);
	}
	*buff_ind = 0;
}

