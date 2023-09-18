#include "main.h"

/**
 * rev_string - function that reverse a string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	/*Declarations*/
	int len;
	int start;
	int end;

	if (!s)
	{
		return;
	}
	/* initlization*/
	len = strlen(s);
	start = 0;
	end = len - 1;
	/*operations*/
	while (start < end)
	{
		char temp = s[start];

		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
