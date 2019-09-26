#include "holberton.h"
/**
* print_alphabet_x10 - writes x 10 times
* The caracter to print
*
*Return: 0
* On error, -1 is returned, and errno is set appropriately.
*/
void print_alphabet_x10(void)
{
  int n;
  int i = 0;
    
  do {
    for (n = 0 ; n <= 14 ; n++)
      {
	if (n > 9)
	  {    _putchar(n / 10 + '0');
	  }
	_putchar(n % 10 +'0');
      }
    i++;
    _putchar('\n');
  } while (i <= 13);
    
}
