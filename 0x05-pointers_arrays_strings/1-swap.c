#include "main.h"
/**
 * swap_int - swap to intgers
 *
 * @a: input 1
 * @b: input 2
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
