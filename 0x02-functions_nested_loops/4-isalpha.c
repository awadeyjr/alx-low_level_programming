#include "main.h"
/**
 * _isalpha - Shows a 1 when the inputs is a letter
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for letters . 0 for rest
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
