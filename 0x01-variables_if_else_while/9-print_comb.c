#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: This function is the entry point of the program.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{	int i;
	for (i = 0; i < 10; i++)
	{	putchar(i + '0');
		if (i == 9)
			putchar('\n');
		else
		{	putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
