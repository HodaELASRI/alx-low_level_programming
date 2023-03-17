#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This function is the entry point of the program.
 *              It executes first when the program is run and
 *              it will print if n is positive or negative or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of %d is ", n);
	last_digit = abs( n % 10);
	if (last_digit > 5) {
		printf("%d and is greater than 5\n", last_digit);
	} else if (last_digit == 0) {
		printf("%d and is 0\n", last_digit);
	} else {
		printf("%d and is less than 6 and not 0\n", last_digit);
	}
	return (0);
}
