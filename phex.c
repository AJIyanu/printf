#include "main.h"

/**
 * phex - converts dec to hex
 * dig: number to be converted
 * Return: counts of putchar
 */

int phex(int num)
{
	int i = 1;

	if (num == 0)
		_putchar('0');

	if (num / 16)
		i = 1 + phex(num / 16);
	if (num % 16 > 9)
		_putchar(num % 16 + 55);
	if (num % 16 < 10)
		_putchar(num % 16 + 48);
	return (1);

