#include <stdio.h>
/**
 * main - print fibonnaci sequence with even num
 *
 * return: 0 Always
 */
int main(void)
{
	long f1 = 0;
	long f2 = 2;
	long sum;

	while (sum < 4000000)
	{
		sum += f1 + f2;
		i += 2;
		j += 2;
	}

	printf("%ld\n", sum);
	
	return (0);
}
