/*
 * This is the main function that runs the program. It prompts the user for a number,
 * and determines if it is positive or negative.
 */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*this is my modification*/
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else 
		printf("%d is zero\n", n);
	return (0);
}
