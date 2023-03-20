#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int q, n, k;

	for (q = '0'; q < '9'; ++q)
	{
	for (n = q + 1; n <= '9'; ++n)
	{
	for (k = n + 1; k <= '9'; ++k)
	{
	if ((n != q) != k)
	{
	putchar(q);
	putchar(n);
	putchar(k);
	if (q == '7' && n == '8')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
