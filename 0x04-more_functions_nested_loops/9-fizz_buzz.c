#include <stdio.h>
#include "main.h"
/**
 * main - prints numbers from 1 to 100
 * for multiples of 3 print Fizz
 * for multiples of 5 print Buzz
 * for multiples of both print FrizzBuzz
 *
 * Return: void
 */

void main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0) && (i % 5 == 0)
		{
			printf("FrizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("Friz");
		}
		else
		{
			printf("%d", i)
		}
	}
	printf("\n");
}
