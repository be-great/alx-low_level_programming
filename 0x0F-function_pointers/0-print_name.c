#include "function_pointers.h"

/**
 * print_name - function that prints a name.
 * @name: the name.
 * @f: The function pointer.
 */
void print_name(char *name, void (*f)(char *))
{
	/* check if both arg not NULL*/
	if (name && f)
		f(name);
}
