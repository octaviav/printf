#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_hexxx - prints an hexgecimal number.
 * @mas: value converted
 * Return: counter
 */
int print_hexxx(unsigned long int mas)
{
	long int s;
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
	if (array == NULL)
		return (NULL);

	for (s = 0; s < counter; s++)
	{
		array[s] = sims % 16;
		sims = sims / 16;
	}
	for (s = counter - 1; s >= 0; s--)
	{
		if (array[s] > 9)
			array[s] = array[s] + 39;
		_putchar(array[s] + '0');
	}
	free(array);
	return (counter);
}
