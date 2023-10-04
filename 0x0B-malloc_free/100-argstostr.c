#include "main.h"
/**
 * *argstostr - function that concatenates all the arguments of your program
 * @ac: number of argument
 * @av: the arguments
 * Return: pointer to new string
 */



char *argstostr(int ac, char **av)
{
	int c = 0, i = 0, j, k;
	char *newstr;

	if (ac == 0)
		return (NULL);

	while (i < ac)
	{
		if (av[i] == NULL)
			return (NULL);
		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
		i++;
	}

	newstr = malloc((c + 1) * sizeof(char));
	if (newstr == NULL)
	{
		free(newstr);
		return (NULL);
	}
	for (i = j = k = 0; k < c; j++, k++)
	{
		if (av[i][j] == '\0')
		{
			newstr[k] = '\n';
			i++;
			k++;
			j = 0;
		}
		if (k < c - 1)
			newstr[k] = av[i][j];
	}
	newstr[k] = '\0';

	return (newstr);
}
