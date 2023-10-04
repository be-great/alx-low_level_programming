#include "main.h"
/**
 * *str_concat - function that concatenates two strings.
 * @s1: string one
 * @s2: string two
 * Return: pointer to the concat string
 */



char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0;
	char *s3;
	int i, j;

	if (s1 == NULL)
		return ("");

	if (s2 == NULL)
		return ("");

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;


	s3 = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (s3 == NULL)
	{
		free(s3);
		return (NULL);
	}

	for (i = 0; i < len1 ; i++)
		s3[i] = s1[i];
	for (i = len1, j = 0; j <= len2; j++, i++)
		s3[i] = s2[j];

	return (s3);

}
