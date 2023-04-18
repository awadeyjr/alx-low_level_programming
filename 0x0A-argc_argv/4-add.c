#include <stdio.h>
#include <stdlib.h>

/**
 * main - print sum of two numbers
 * @argc: int
 * @argv: value
 * Return: 0 success, other fail
 */
int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) + atoi(argv[2]);
		printf("%d\n", sum);
	}
	else if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
