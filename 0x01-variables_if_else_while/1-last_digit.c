#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last = n % 10;
	printf("Last digit of %i is %i and is ", n, last);
	if (last > 5)
		printf("greater than 5\n");
	else if (last == 0)
		printf("0\n");
	else
		printf("less than 6 and not 0\n");
	return (0);
}
