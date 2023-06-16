#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * manin - entry point
 *
 * description: false or true validation
 *
 * return: 0 (success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative",n);
	}
	return (0);
}
