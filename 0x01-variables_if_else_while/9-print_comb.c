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
	for (i = 0; i < 9; i++)
	{	putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('9');
	return (0);
}
