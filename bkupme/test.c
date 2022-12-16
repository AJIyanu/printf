#include <stdio.h>
#include <stdarg.h>
#include "main.h"
#include <limits.h>

/*void argcheck(int num, ...)
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
*/
unsigned int _pow(int n, int p)
{
	int i;
	unsigned int mul;
	mul = n;

	for (i = 0; i < p; i++)
		mul = mul * n;
	return (mul);
}


int main()
{
	int i = 1111;
	int j = 2;
	unsigned int k = (unsigned int)INT_MAX + 1024;
	unsigned int l = k + _pow(2, 32);

//	argcheck(3, i, j, k);
	j = poct(i);
	printf("\n%d\n", j);

	return 0;
}
