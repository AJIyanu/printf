#include "main.h"

/**
 * smphex - converts dec to hex
 * @num: number to be converted
 * Return: counts of putchar
 */

int smphex(int num)
{
	int i = 1;

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