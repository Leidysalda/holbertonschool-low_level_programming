#include <stdio.h>
#include "holberton.h"
/**
 * _strlen - a function long.
 * @s: char 
 *Return: Always 0.
 */
int _strlen(char *s)
{
      if (*s != '\0')
      {
              return (1 + _strlen(s + 1));
      }
      return (0);
}

/**
 * aux - a function 
 * @s: base
 * @x: number
 *Return: Always 0.
 */
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

/**
 * is_palindrome - a function 
 * @s: base
 * 
 *Return: Always 0.
 */
int is_palindrome(char *s)
{
        int l;
        l = _strlen(s);
        return (aux(s, l));
}
