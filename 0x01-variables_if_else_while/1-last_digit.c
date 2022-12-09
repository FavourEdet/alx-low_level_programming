#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more header goes there */

/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int lastNum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d is",n);
	num = n % 10;
			if (lastNum > 5)
			{
			printf("Last digit of %d is %d and is greater than 5\n", n, lastNum);
			}
			else
			printf("Last digit of %d and is less than 6 and not 0\n", n, lastNum);
			return (0);
			}
