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
	{	putchar(i + '0');
		putchar(',');
		putchar(' ');
		putchar('\n');
	}
	return (0);
}
