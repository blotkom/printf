#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_perc - print %
 * @args: the data
 * Return: return the % sign
 *
 */
int print_perc(va_list args)
{
	char *string;

	string = "%";
	if (va_arg(args, int) == *string)
	{
		return (*string);
	}
	return (*string);
}
