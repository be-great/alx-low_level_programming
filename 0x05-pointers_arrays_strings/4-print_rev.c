#include "main.h"

/**
 * print_rev - function that prints a string
 * in reverse followed by \n
 * @s: character to test
 */

void print_rev(char *s)
{
	/**Declarations*/
	int len;
	int start;
	int end;
	char *revarr;

	if (!s)
	{
	return;
	}

	/**initlization*/
	len = strlen(s);
	start = 0;
	end = len - 1;
	revarr = (char *)malloc((len + 1) * sizeof(char));
	strcpy(revarr, s);
	while (start < end)
	{
		/* swap the each end of string with each of the begging*/
		char temp = revarr[start];

		revarr[start] = revarr[end];
		revarr[end] = temp;
		start++;
		end--;
	}
	puts(revarr);
	free(revarr);
}
