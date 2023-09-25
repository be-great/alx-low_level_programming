#include <stdio.h>
/**
 * set_string - function that sets the value of a pointer to a char.
 * @s: the pointer
 * @to: the second pointer
 */

void set_string(char **s, char *to)
{
	*s = to;
}

