#include <unistd.h>

/**
 * _putchar - writes c into stdout
 * @c: The character which will be printed
 * Return: On success 1.
 * On error. -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts -  this functn prnts a str.
 *
 *
 * @str: args s
 *
 * Return: str. to stdout.
 */


void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}


