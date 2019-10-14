#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Whats my name
 * @argc: number
 * @argv: number
 * Return: Always 0.
 */

int main(__attribute__((unused))int argc, char *argv[])
{
	int i = 1, j = 0, suma = 0;

	if (argc > 1)
	{
		while (i < argc)
		{
			while (argv[i][j] != 0)
			{
				if (!isdigit(argv[i][j++]))
				{
					printf("Error\n");
					return (1);
				}
			}
			suma += atoi(argv[i++]);
		}
	}
	printf("%d\n", suma);
	return (0);
}
