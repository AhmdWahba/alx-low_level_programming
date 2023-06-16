#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * manin - entry point
 *
 * description:this function checks if the number positive or negative
 *
 * return: 0 (success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0){
		printf("%i is positive\n",n);
	}
	else if (n = 0){
		printf("is zero\n",n)
	}	
	else("%i is negative",n){
		printf("is negative",n)
	}
	return (0);
}
