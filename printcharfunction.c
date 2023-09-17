#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_char echo character
 * @args: characters argments
 * Return: number of characters that printed
 */
int print_char(va_list args)
{
	int c;

	c = va_arg(args, int);
	return (_putchar(c));
}
