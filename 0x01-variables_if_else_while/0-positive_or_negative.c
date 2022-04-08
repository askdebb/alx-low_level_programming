#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 *  main - this is the entry point 
 *  of the program
 *  has some other functions that produces
 *  random numbers and determine whether they are
 *  positive or negative or zero integers with a condition
 *  /

/* betty style doc for function main goes there */
int main(void)                   
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
