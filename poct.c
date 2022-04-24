#include <stdarg.h>
#include "main.h"

/**
 * poct - convert to oct
 * @va_arg: number to convert
 * Return: number of putchar printed
 */

int poct(va_arg(arg, int))
{
	int i = 1;
	int j;
	int num = va_arg(arg, int);

	if (nun / 8)
		i = i + poct(num / 8);
	_putchar(num % 8 + '0');
	return (i);
}
