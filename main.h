#ifndef MAIN__H
#define MAIN_H

#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <stdio.h>

typedef struct format
{
	char *k;
	int (*u)();
} smile;

int _printf(const char *smile, ...);
int _putchar(char c);
int print_hexx(va_list val);
int print_space2(unsigned int num);
int print_hex(va_list val);
int print_bina(va_list val);
int print_c(va_list val);
int printf_dec(va_list args);
int printf_dec(va_list args);
int print_non_string(va_list val);
int printf_oct(va_list val);
int print_ptr(va_list val);
int print_37(void);
int print_srevs(va_list args);
int _strlen(char *str);
int _strlenc(const char *s);
int print_space(unsigned long int mas);
int print_str(va_list val);
int print_unsgd(va_list args);
int printf_int(va_list args);
int print_13rot(va_list args);

#endif
