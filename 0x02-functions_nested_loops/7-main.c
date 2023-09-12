#include "main.h"
#include <limits.h>
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;
    printf("number %d",INT_MIN);
    print_last_digit(98);
    print_last_digit(0);
    /*print_last_digit(INT_MIN);*/
    r = print_last_digit(-1024);
    _putchar( r+'0');
    _putchar('\n');
    return (0);
}
