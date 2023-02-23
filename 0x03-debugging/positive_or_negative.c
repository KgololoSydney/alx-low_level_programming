#include "main.h"

/*
 *main- entry point
 *assign random numbers to
 *output- n is zero , if no=0
 *
 * 
 */

void positive_or_negative (int n)
{
	if (n == 0)
		printf("%d is zero\n",n);
	if (n < 0)
                printf("%d is negative\n",n);
	if (n > 0)
                printf("%d is positive\n",n);

}

