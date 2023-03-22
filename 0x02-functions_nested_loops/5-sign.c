#include "main.h"

/**
 * print_sign - Determines if inputs is postive or negative
 * @n: The input number as integer
 * Return: 1 is greater than zero . 0 is zero . -1 is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
