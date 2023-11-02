#include "main.h"
/**
 * *string_nconcat - function that concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * @n: the number of byte to copy from the second string
 * Return: pointer to the new concatenates string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1 = 0;
	unsigned int len2 = 0;
	char *newstr;
	int i = 0;
	int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n > len2)
		n = len2;
	newstr = malloc((len1 + n + 1));

	if (newstr == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		newstr[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0' && n > 0)
	{
		newstr[i] = s2[j];
		n--;
		i++;
		j++;
	}
	newstr[i] = '\0';
	return (newstr);
}

