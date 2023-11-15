#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * print_space - prints an hexgecimal number.
 * @mas: arguments
 * Return: counter
 */
int print_space(unsigned long int mas)
{
	long int u;
	long int *array;
	long int counter = 0;
	unsigned long int sims = mas;

	while (mas / 16 != 0)
	{
		mas /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(long int));

	for (u = 0; u < counter; u++)
	{
		array[u] = sims % 16;
		sims = sims / 16;
	}
	for (u = counter - 1; u >= 0; u--)
	{
		if (array[u] > 9)
			array[u] = array[u] + 39;
		_putchar(array[u] + '0');
	}
	free(array);
	return (counter);
}
