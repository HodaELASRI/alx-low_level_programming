#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: This function is the entry point of the program.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{	int i, j;
	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{	putchar(i + '0');
			putchar(j + '0');
			if (i == 8)
				putchar('\n');
			else
			{	putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
