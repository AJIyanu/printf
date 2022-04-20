#include <stdio.h>
#include <stdarg.h>
#include "main.h"

void argcheck(int num, ...)
{
	int i;
	int *d;
	va_list args;
	va_start(args, num);

	for (i = 0; i < num; i++)
	{
		d = va_arg(args, int *); 
		printf("%d\n", d);
	}
}


int main()
{
	int i = 1;
	int j = 2;
	int k = 76546;

//	argcheck(3, i, j, k);
	j = phex(k);
	printf("\n%x\n", j);

	return 0;
}
