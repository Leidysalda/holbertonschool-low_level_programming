#include <stdio.h>
#include <string.h>
#include "holberton.h"
/**
 * _strcpy - function that copies the string pointed
 * @dest: dest
 * @src: source
 *
 *Return: pointe dest.
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return(dest);
}
