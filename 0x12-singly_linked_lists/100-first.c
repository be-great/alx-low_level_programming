#include <stdio.h>
/**
* bmain - function that prints string before the main function is executed.
*/

void __attribute__((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
