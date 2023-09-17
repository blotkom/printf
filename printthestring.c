#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_string - print string char by char
 * @args: the string will be printed
 * Return: number of characters that printed
 */
int print_string(va_list args)
{
	int i, counter = 0;
	char *str;

	i = 0;
	str = va_arg(args, char*);
	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		counter++;
	}
	return (counter);
}
