#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - main calculator
 * @argv:
 * @argc:
 *
 * Return: 0n success 1.
 *
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*calc)(int, int);

	calc = get_op_func(argv[2]);
	if (calc == NULL || strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0]) != '+' && (argv[2][0]) != '-' && (argv[2][0]) != '*'
	    && (argv[2][0]) != '/' && (argv[2][0]) != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if (argc != 4)
	{

	printf("Error\n");
	exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	printf("%d\n", calc(num1, num2));
	return (0);
}
