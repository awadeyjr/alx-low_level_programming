#include "main.h"
/**
 * print_to_98 - Print n to 98 counts
 * 
 * @n: input
 */
void prin_to_98(int n)
{
	int count;

	if (n > 98)
		for (count = n; count > 98; count--)
			printf("%d, ", count);
	else
		for (count = n; count < 98; count++)
			printf("%d, ", count);
	printf("98\n");
}