#include "main.h"
/**
* *_strdup -function that returns a pointer to a newly  allocated apace
* in memory , which contians a copy of the string given as a parameter
* @str: the string
* Return: pointer to the duplicatd string ,
* or null if insufficient memory was available
*/

char *_strdup(char *str)
{
	char *newstr;

	int count = 0, i = 0;

	if (str == NULL)
		return (NULL);

	while (str[count] != '\0')
	{
		count++;
	}
	newstr = (char *)malloc((count + 1) * sizeof(char));
	if (newstr == NULL)
		return (NULL);

	while (i <= count)
	{
		newstr[i] = str[i];
		i++;
	}
	return (newstr);
}
