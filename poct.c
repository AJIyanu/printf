#include "main.h"

/**
 * poct - convert to oct
 * @num: number to convert
 * Return: number of putchar printed
 */

int poct(int num)
{
	int i = 1;
	int j;

	if (num / 8)
		i = i + poct(num / 8);
	_putchar(num % 8 + '0');
	return (i);
}
