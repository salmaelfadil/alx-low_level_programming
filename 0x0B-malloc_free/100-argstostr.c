#include "main.h"
#include <stdlib.h>
/**
 * argstostr -- concatenates all the arguments of the program
 * @ac: argument count
 * @av: argument value
 *
 * Return: pointer to new string NULL if fails
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, len = 0;
	char *a;
	
	if (ac == 0 || av == 0)
		return (NULL);
	
	for (; i < ac; i++)
	{
		while (a[i][j])
		{
			len++;
			j++;
		}
	}
	
	a = malloc(sizeof(char) * (len + 1));

	if (a == NULL)
		return (NULL);

	for(i = 0; i <= ac; i++)
	{	
		for (j = 0; av[i][j]; j++)
			a[i] = av[i][j];
		
		a[i + 1] = '\n';
	}
	
	a[i] = '\0';
	
	return (a);
}
