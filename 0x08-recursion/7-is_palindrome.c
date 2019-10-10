#include <stdio.h>
#include "holberton.h"
/**
 * is_prime_number2 - a function that prints string in reverse.
 * @n: base
 * @m: number
 *Return: Always 0.
 */

int is_palindrome(char *s)
#include <stdio.h>

	int _strlen(char *s)

{
	if (*s != '\0')
	{
		return (1 + _strlen(s + 1));
	}
	return (0);
}


int aux(char *s, int x)

{
	if (x <= 0)
	{
		return (1);
	}
	if (*s == *(s + (x - 1)))
	{
		return (aux(s + 1, x - 2));
	}
	else
	{
		return(0);
	}
}

int is_palindrome(char *s)
{
	int l;
   
	l = _strlen(s);
	return (aux(s, l));
}

{
	if (n <= 1 || (m != n && n % m == 0))
		return (0);
	if (m == n)
	{
		return (1);
	}
	else
	{
		return (is_prime_number2(n, m + 1));
	}
}

/**
 * is_prime_number - a function that prints string in reverse.
 * @n: base
 *
 *Return: Always 0.
 */

int is_prime_number(int n)
{
	return (is_prime_number2(n, 2));
}
