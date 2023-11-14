#include "main.h"
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

/**
 * print_hexx - number in hexadecimal place
 * @val: paramenter in code
 * Return: counter
 */
int print_hexx(va_list val)
{
	int c;
	int *array;
	int counter = 0;
	unsigned int mas = va_arg(val, unsigned int);
	unsigned int sim = mas;

	while (mas / 16 != 0)
	{
		mas /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (c = 0; c < counter; c++)
	{
		array[c] = sim % 16;
		sim /= 16;
	}
	for (c = counter - 1; c >= 0; c--)
	{
		if (array[c] > 9)
			array[c] = array[c] + 7;
		_putchar(array[c] + '0');
	}
	free(array);
	return (counter);
}
