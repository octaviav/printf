#ifndef MAIN__H
#define MAIN_H

#define BUFFER 1024

#include <unistd.h>
#include <stdlib.h>

#include <stdarg.h>
#include <limits.h>

#include <stdio.h>


/**
 * struct format_spec - functn struct
 * @spec: form specifier
 */

typedef struct format_spec
{
	char  *spec;
	int (*f)(va_list);
} spec_type;



int _printf(const char *format, ...);
int _putchar(char c);
int rev_string(va_list arg);
int printf_char(va_list val);
int printf_rot13(va_list args);
int printf _octal(va_list args);
int printf_string(va_list val);
int printf_percent(va_list args);
int _strlen(char *str);
int _strlenc(const char *str);
int print37(void);
int (*printf_specifier(char format))(va_list);
int printf_heX(va_list args);
int printf_hex(va_list args);
int printf_binary(va_list args);
int printf_unsigned(va_list args);
int print_int(va_list args);
int print_dec(va_list args);
int printf_reverse(va_list args);
void _puts(char *str);
int print_char(va_list, typeof, charbuffer[]);
void print_buffer(char buffer[], int *buff_ind);

#endif
