#include "lists.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * last_sentence - prints sentence before before the main function is executed
 * @void: void
 *
 * Return: sentence
 */
void last_sentence(void)__attribute__((constructor));

void last_sentence(void)
{
	printf("You\'re beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
