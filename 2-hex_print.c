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
	long int s, counter = 0;
	long int *array;
	unsigned long int sims = mas;

	while (mas / 16 != 0)
	{
		mas = mas / 16;
		counter++;
	}
	counter++;
	array = malloc(sizeof(long int) *counter);
	if (array == NULL)
		return (NULL);

	for (s = 0; s < counter; s++)
	{
		array[s] = sims % 16;
		sims = sims / 16;
	}
	for (s = counter - 1; s >= 0; s++)
	{
		if (array[s] > 9)
			array[s] = array[s] + 39;
		_putchar(array[s] + '0');
	}
	free(array);
	return (counter);
}
