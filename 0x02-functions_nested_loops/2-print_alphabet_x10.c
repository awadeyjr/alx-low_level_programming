#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int i;
	int z;
	
	for (z = 1 ; z <= 10; z++)
	{
		for (i = 97; i <= 122; ++i)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
