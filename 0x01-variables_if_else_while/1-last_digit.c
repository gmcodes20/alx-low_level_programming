#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, firstnumber;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	firstnumber = n % 10;
	if (firstnumber > 5)
	{
	printf("Last digit of %d is %d and is greater tha 5 \n", n, firstnumber);
	}
	else if (firstnumber == 0)
	{
	printf("Last digit of %d is %d and is 0 \n", n, firstnumber);
	}

	else if (firstnumber < 6 && firstnumber != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0 \n ",
	       n, firstnumber);
   	}
	return (0);
}
