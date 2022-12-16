#include <stdarg.h>
#include "main.h"

/**
 * smphex - converts dec to hex
 * @va_arg: number to be converted
 * Return: counts of putchar
 */

int smphex(va_arg(arg, int))
{
	int i = 1;
	int num = va_arg(arg, int);

	if (num == 0)
		_putchar('0');

	if (num / 16)
		i = i + phex(num / 16);
	if (num % 16 > 9)
		_putchar(num % 16 + 87);
	if (num % 16 < 10)
		_putchar(num % 16 + 48);

	return (i);
}
