#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Alphabet
*
* Return: Always 0 (Success)
*/
int main(void)
{
char n = 'a';
char m = 'A';
while (n <= 'z')
{
putchar(n);
n++;
}
while (m <= 'Z')
{
putchar(m);
m++;
}
putchar('\n');
return (0);
}
