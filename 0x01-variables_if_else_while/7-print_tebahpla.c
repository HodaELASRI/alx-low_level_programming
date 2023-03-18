#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: This function is the entry point of the program.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{       char letter;

	letter = 'z';
	do {
		putchar(letter);
		letter--;
	} while (letter >= 'a');
	putchar('\n');
	return (0);
}
