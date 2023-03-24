#include "main.h"
/**
 * print_numbers - print from 0 to 9 followed by a new line
 *
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	int i = 0;

	for (i = 48; i <= 57; ++i)
	{
		_putchar(i);
	}
	_putchar('\n');
}
