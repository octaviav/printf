#include "main.h"

/**
 * print_srevs -  prints a str in reverse
 * @args: type printf arguments
 *
 * Return: the str.
 */
int print_srevs(va_list args)
{

	char *s = va_arg(args, char*);
	int v;
	int t = 0;

	if (s == NULL)
		s = "(null)";
	while (s[t] != '\0')
		t++;
	for (v = t - 1; v >= 0; v--)
		_putchar(s[v]);
	return (v);
}
