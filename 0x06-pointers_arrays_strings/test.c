#include <stdio.h>

void print_number(int n) {
    unsigned int n1;

    n1 = (n < 0) ? -n : n;  // Handle negative numbers

    if (n < 0) {
        putchar('-');
    }

    while (n1 / 10 != 0) {
        putchar(n1 % 10 + '0');
        n1 = n1 / 10;
    }

    putchar(n1 + '0'); // Print the last digit
}

int main(void)
{
print_number(12345);
return (0);
}
