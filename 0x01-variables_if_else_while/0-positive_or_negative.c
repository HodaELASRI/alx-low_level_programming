#include <stdlib.h>
#include <time.h>
#include <stdio.h>


int main(void)
{
	/*this function specify if a number is positive or negative or zero*/
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
