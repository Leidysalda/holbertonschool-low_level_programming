#include <stdio.h>
#include "holberton.h"
/**
 * add - fill memory with a constant byte
 * @a: memory area point
 * 
 *Return: Always 0.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}#include <stdio.h>
#include <ctype.h>

int main()
{
	int i, j, suma;
    
	for (i = 0; i <= 0; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (isdigit(argv[i][j]))
			{
				printf("Error");
				return(1);
			}
			suma+=atoi(argv[i][j]);
		}
		if (*argv[i] == ' ')
			return 0;
    
		printf("%d", suma);
    return 
	    }
    
	return 0;
}

