#include "main.h"
#include <stdio.h>

/**
 * _strlen - string length
 * @str: pointer to a string
 * Return: x
 */
int _strlen(char *str)
{
	int x;

	for (x = 0; str[x] != 0; x++)
		;
	return (x);
}

/**
 * _strlenc - outputs const char string length
 * @s: string
 * Return: int
 */
int _strlenc(const char *s)
{
	int g;

	for (g = 0; s[g] != 0; g++)
		;
	return (g);
}

