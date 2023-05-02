#include "main.h"
/**
 * _strlen: returns length of string
 * @s: string whose length will be returned
 *
 */
int _strlen(char *s)
{
	int count = 0;
	for(int i = 0; *s != '\0'; i++)
	{
		count++;
	}
	return count; 
}
