#include <stdio.h>
/**
* main - Print number 00 - 99
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i, n;
for (i = 48; i <= 57; i++)
{
for (n = 48; n <= 57; n++)
{
putchar (i);
putchar (n);
if (n != '9' || i != '9')
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
