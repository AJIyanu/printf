#include "main.h"

/**
 * pint - prints integer with putchar
 * @int: address of int num
 * Return: count of putchar invoked
 */

int pint(int num)
{
	int i = 1;

	if (num < 0)
	{
		_putchar('-');
		num = num * -1;
	}
	if (num == 0)
		_putchar('0');

	if (num/10)
		i = 1 + pint(num / 10);
	_putchar(num % 10 + '0');
	return (i);
}
