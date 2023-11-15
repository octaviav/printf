#include "main.h"
#include <stdio.h>

/**
 * len_str - string length
 * @str: pointer to a string
 * Return: x
 */
int len_str(char *str)
{
	int x;

	for (x = 0; str[x] != 0; x++)
		;
	return (x);
}

/**
 * const_str - outputs const char string length
 * @s: string
 * Return: int
 */
int const_str(const char *s)
{
	int g;

	for (g = 0; s[g] != 0; g++)
		;
	return (g);
}
