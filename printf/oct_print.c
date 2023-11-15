#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * printf_oct - prints a number in octal
 * @val: arguments.
 * Return: counter
 */
int printf_oct(va_list val)
{
	int d;
	int *array;
	int counter = 0;
	unsigned int blu = va_arg(val, unsigned int);
	unsigned int y = blu;

	while (blu / 8 != 0)
	{
		blu /= 8;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (d = 0; d < counter; d++)
	{
		array[d] = y % 8;
		y /= 8;
	}
	for (d = counter - 1; d >= 0; d--)
	{
		_putchar(array[d] + '0');
	}
	free(array);
	return (counter);
}
