#include <stdio.h>
/**
 * main - print first 50 fibonacci numbers
 * 
 * Return: 0
 */

int main(void)
{
	long i = 0;
	long j = 1;
	long n = 0;
	long f;

	while (n < 50)
	{
		f = i +j;
		if (n != 49)
			printf("%ld, ", f);
		else
			printf("%ld\n", f);
	       i = j;
	       j = f;
	       n += 1;
	}
	return (0);
}
