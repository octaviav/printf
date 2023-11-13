#include <stdarg.h>
#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);
int _putchar(char c);
int printf_char(va_list val);
int printf_string(va_list val);
int _strlen(char *str);
int _strlenc(const char *str);
int print37(void);
int print_int(va_list args);
int print_dec(va_list args);
int print_char(va_list, typeof, charbuffer[]);
void print_buffer(char buffer[], int *buff_ind);

#endif
