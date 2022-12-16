#include "main.h"
#include <stdlib.h>

/**
 * Iden - a struct of identifiers to select identities
 * @ch: character
 * @fun: function
 *
 * Return: struct
 */

typedef struct iden
{
	char s;
	int (*fun)(va_list arg);
}ident;

int act(ident arr[], char *s)
{
	int i;

	for (i = 0; arr[i] != NULL; i++)
	{
		if (s == arr[i]->s)
		{
			return (arr[i]->fun(arg));
	}
	return (NULL);
}

void arraystruct(void)
{
	ident arr[] = {
		{'s', pstr}
		{'c', _putchar}
		{'d', pint}
		{'o', poct}
		{'x', smphex}
		{'X', phex}
		{NULL, NULL}
	};
}

int _printf(char *phold, ...)
{
	int i;
	int count = 0;
	int rcount = 0;
	va_list arg;

	va_start(arg, phold);
	arraystruct();
	for (i = 0; phold[i] != '\0'; i++)
	{
		if (phold[i] == '%')
			count = act(arr[], phold[i + 1]);
		else
		{
			_putchar(phold[i]);
			rcount++;
		}
	}
	return (rcount + count);
}
