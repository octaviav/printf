#include "main.h"

/**
 * print_space2 - prints an hexgecimal number.
 * * @num: number to print.
 * Return: counter.
 */
int print_space2(unsigned int nom)
{
	int mel;
	int *array;
	int counter = 0;
	unsigned int sim = nom;

	while (nom / 16 != 0)
	{
		nom /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (mel = 0; mel < counter; mel++)
	{
		array[mel] = sim % 16;
		sim /= 16;
	}
	for (mel = counter - 1; mel >= 0; mel--)
	{
		if (array[mel] > 9)
			array[mel] = array[mel] + 7;
		_putchar(array[mel] + '0');
	}
	free(array);
	return (counter);
}

