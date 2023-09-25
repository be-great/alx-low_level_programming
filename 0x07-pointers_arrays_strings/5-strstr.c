#include <stdio.h>
/**
 * *_strstr - function that locates a substring.
 * @haystack: the string
 * @needle: substring to match (remember all of it)
 * Return: pointer to the beginning of the located needle in haystack
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	/* loop throw the first string*/
	while (haystack[i] != '\0')
	{
		/*alway start second string from begining*/
		/*first string we want to modify*/
		/*(move to check every character) so we copy it*/
		char *ptr0 = &haystack[i];
		char *ptr1 = needle;

		while (*ptr0 == *ptr1 && *ptr1 != '\0')
		{
			ptr0++;
			ptr1++;
		}
		/*that mean we made it :) */
		if (*ptr1 == '\0')
			return (&haystack[i]);
		i++;
	}

	return (NULL);
}

