#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n = 0;
char i = 'a';
for (n = '0' ; n <= '9' ; n++)
{
putchar(n);
}
while (i <= 'f')
{
putchar(i);
i++;
}
putchar('\n');
return (0);
}
