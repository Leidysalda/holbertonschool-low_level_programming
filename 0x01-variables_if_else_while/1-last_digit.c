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
int n;
int i;
char palabra[] = "abcdefghijklmnopqrstuvwxyz";
n = sizeof(palabra);
for (i = n - 2; i >= 0; i--)
{
putchar(palabra[i]);
}
return ();
}
