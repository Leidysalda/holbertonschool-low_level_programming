#include <stdio.h>
#include <stdlib.h>
/**
 * main - Whats my name
 * @argc: number
 * @argv: number
 * Return: Always 0.
 */

int main(__attribute__((unused))int argc, char *argv[])
{
	int i, j, mul;

	if (argc <= 3 && argc != 0)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		mul = i * j;
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
