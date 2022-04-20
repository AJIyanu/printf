#include "main.h"

/**
 * pstr - prints string
 * @str: address of string to be printed
 * Return: count of invoked print
 */

int pstr(char *str)
{
	int count = 0;

	for (count = 0; str[count] != '\0'; count++)
		_putchar(str[count]);
	count--;
	return (count);
}
