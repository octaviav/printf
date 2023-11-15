#include "main.h"
/**
 * print_13rot - convert to rot13
 * @args: arguments
 * Return: counter
 *
 */
int print_13rot(va_list args)
{
	int v, j, counter = 0;
	int k = 0;
	char *s = va_arg(args, char*);
	char xl[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char yl[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";
	for (v = 0; s[v]; v++)
	{
		k = 0;
		for (v = 0; xl[v] && !k; j++)
		{
			if (s[v] == xl[j])
			{
				_putchar(yl[j]);
				counter++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(s[v]);
			counter++;
		}
	}
	return (counter);
}
