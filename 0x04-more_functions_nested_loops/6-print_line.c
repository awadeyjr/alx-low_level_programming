#include "main.h"

/**
 * print_line - print _
 * 
 * @n: _ times
 *
 */
void print_line(int n)
{
	int x;

	if (n < 0)
		_putchar('\n');
	else
	{
		for (x = 1; x <= n; ++x)
			_putchar('\n');
		_putchar('\n');
	}
}
