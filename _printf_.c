#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>

void print_buffer(char buffer[], int *buff_ind);

/**
 * _printf - main function
 * @format: frmt
 * Return: 0
 */
int _printf(const char *format, ...)
{
	int k,
	int flags, width, precision, size, buff_ind = 0;
	va_list list;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(list, format);

	for (k = 0; format && format[i] != '\0'; k++)
	{
		if (format[k] != '%')
		{
			buffer[buff_ind++] = format[k];
			if (buff_ind == BUFF_SIZE)
				print_buffer(buffer, &buff_ind);
			/* write(1, &format[i], 1);*/
			printed_chars++;
		}
		else
		{
			print_buffer(buffer, &buff_ind);
			flags = get_flags(format, &k);
			width = get_width(format, &k, list);
			precision = get_precision(format, &k, list);
			size = get_size(format, &k);
			++k;
			printed = handle_print(format, &k, list, buffer,
				flags, width, precision, size);

		}
	}

	print_buffer(buffer, &buff_ind);

	va_end(list);

	return (printed_chars);
}

/**
 * print_buffer - buffer results
 * @buffer: char arrays
 * @buff_ind: length to be added next
 */
void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(1, &buffer[0], *buff_ind);

	*buff_ind = 0;
}
