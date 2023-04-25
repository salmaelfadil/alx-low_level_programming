#include <stdio.h>

/**
 * main - compute sum of multiples of 3 or 5
 * below 1024
 *
 * Return: 0 Always
 */
int main(void)
{
	int sum = 0;
	int mul = 0;

	while (mul < 1024)
	{
		if ((mul % 3) == 0 || (i % 5) ==0)
			sum +=1;
	}

	printf("%d\n", sum);

	return (0);
}
