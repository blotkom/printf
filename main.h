#ifndef myprintif
#define myprintif
#include <stdio.h>
#include <stdarg.h>
/**
 * struct specifier - struct specifier
 * @valid: val char
 * @f: the func
 *
 */
typedef struct specifier
{
	char *valid;
	int (*f)(va_list);
} spec;
int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_decimal(va_list args);
int print_interger(va_list args);
int _putchar(char c);
int print_perc(va_list args);
int (*detector_func(char choose))(va_list args);
#endif
