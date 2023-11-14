#include "main.h"
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

/**
 * print_hex - prints a number in hexadecimal place
 * @val: code parameters
 * Return: counter
 */
int print_hex(va_list val)
{
	int f;
	int *array;
	int counter = 0;
	unsigned int mas = va_arg(val, unsigned int);
	unsigned int mas = mas;

	while (mas / 16 != 0)
	{
		mas /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (f = 0; f < counter; f++)
	{
		array[f] = sim % 16;
		sim /= 16;
	}
	for (f = counter - 1; f >= 0; f--)
	{
		if (array[f] > 9)
			array[f] = array[f] + 39;
		_putchar(array[f] + '0');
	}
	free(array);
	return (counter);
}
