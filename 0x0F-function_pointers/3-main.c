#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * main - main
 * @argc:
 * @argv:
 *
 *Return: Always 0.
 */
int main(__attribute__((unused))int argc, char *argv[])
{
	int i, j, op;

	if (argc == 4)
	{
		i = atoi(argv[1]);
		j = atoi(argv[3]);
		op = argv[2]
			(*get_op_func[op])(a, b)
		printf("%d\n", ops[]);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
