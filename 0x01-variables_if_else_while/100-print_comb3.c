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
		for (n = i + 1; n <= 57; n++)
		{
			putchar (i);
			putchar (n);
			if (i == 56 && n == 57)
			{
				break;
			}
			putchar(',');
			putchar (' ');
		}
	}
	putchar ('\n');
	return (0);
}
