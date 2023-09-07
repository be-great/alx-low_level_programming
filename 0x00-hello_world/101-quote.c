#include <unistd.h>

/**
 * main - Entry point
 * Description: Display A string using low-level I/O function
 * Return: Always 1 (Failure)
 */
int main(void)
{

	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDOUT_FILENO, str, sizeof(str) - 1);
	return (1);
}
