#include <stdio.h>
/**
 * main - print fibonnaci sequence with even num
 *
 * Return: 0 Always
 */
int main(void)
{
	int i = 0;
	long f1 = 0;
	long f2 = 2;
	long sum;

	while (sum < 4000000)
	{
		f2 += f1;
		if (f1 % 2 == 0)
			sum += f1;

		i++;
	}

	printf("%ld\n", sum);
	return (0);
}
