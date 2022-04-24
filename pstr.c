#include <stdarg.h>
#include "main.h"

/**
 * pstr - prints string
 * @va_arg: address of string to be printed
 * Return: count of invoked print
 */

int pstr(va_arg(arg, char *))
{
	int count = 0;
	char *str = va_arg(arg, char *);

	for (count = 0; str[count] != '\0'; count++)
		_putchar(str[count]);
	count--;
	return (count);
}
