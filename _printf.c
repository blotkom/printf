#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * _printf - our goal to create printf function
 * @format: string
 * Return: number the number of chaars
 */
int _printf(const char *format, ...)
{
	if (format != NULL)
	{
		int counter = 0, i;
		int (*m)(va_list);
		va_list args;

		va_start(args, format);
		i = 0;
		if (format[0] == '%' && format[1] == '\0')
			return (-1);
		while (format != NULL && format[i] != '\0')
		{
			if (format[i] == '%')
			{
				if (format[i + 1] == '%')
				{
					counter += _putchar(format[i]);
					i += 2;
				}
				else
				{
					m = detector_func(format[i + 1]);
					if (m)
						counter += m(args);
					else
						counter = _putchar(format[i]) + _putchar(format[i + 1]);
					i += 2;
				}
			}
			else
			{
				counter += _putchar(format[i]);
				i++;
			}
		}
		va_end(args);
		return (counter);
	}
	return (-1);
}
