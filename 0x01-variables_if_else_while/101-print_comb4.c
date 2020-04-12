#include <stdio.h>
/**
* main - prints all possible different combinations of three digits.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i, j, n;

	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			for (n = j + 1; n <= 57; n++)
			{
				putchar (i);
				putchar (j);
				putchar (n);
				if (i == 55 && j == 56 && n == 57)
				{
					break;
				}
				putchar(',');
				putchar (' ');
			}
		}
	}
	putchar ('\n');
	return (0);
}
