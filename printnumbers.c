#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_decimal - prints a non-interger
 * @args: decimal number
 * Return: the number that printed
 */
int print_decimal(va_list args)
{

	unsigned int theabsol, atutx, co, counter;
	int n;

	counter = 0;
	n = va_arg(args, int);
		if (n < 0)
		{
			theabsol = (n * -1);
			counter += _putchar('-');
		}
		else
			theabsol = n;

	atutx = theabsol;
	co = 1;
	while (atutx > 9)
	{
		atutx /= 10;
		co *= 10;
	}
	while (co >= 1)
	{
		counter += _putchar(((theabsol / co) % 10) + '0');
		co /= 10;
	}
	return (counter);
}
/**
 * print_interger - print integer number
 * @args: integer data
 * Return: using decimal funcction
 */

int print_interger(va_list args)
{
	return (print_decimal(args));
}
