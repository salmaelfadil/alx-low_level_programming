#include <stdio.h>
/**
 * main - print fibonnaci sequence with even num
 *
 * return: 0;
 */
int main(void)
{
	long i = 0;
	long j = 2;
	long sum;

	while (sum < 4000000)
	{
		sum = i + j;
		i += 2;
		j += 2;
	}

	printf("%ld\n", sum);
	
	return (0);
}
