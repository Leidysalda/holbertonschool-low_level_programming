#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * *_strdup - create a array
 * @str: size array
 *
 *Return: Always 0.
 */

char *_strdup(char *str)
{
	str = malloc(sizeof(char));
	printf("%s\n", str);

	free(str);
	return (0);
}
