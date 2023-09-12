#include <stdio.h>

/**
 * main - program that finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count = 0;
	unsigned long fi1 = 0, fi2 = 1, sum;
	unsigned long fi1_left, fi1_right, fi2_left, fi2_right;
	unsigned long left, right;

	while (count < 92)
	{
		sum = fi1 + fi2;
		printf("%lu, ", sum);

		fi1 = fi2;
		fi2 = sum;
		count++;
	}

	fi1_left = fi1 / 10000000000;
	fi2_left = fi2 / 10000000000;
	fi1_right = fi1 % 10000000000;
	fi2_right = fi2 % 10000000000;

	count = 93;
	while (count < 99)
	{
		left = fi1_left + fi2_left;
		right = fi1_right + fi2_right;
		if (fi1_right + fi2_right > 9999999999)
		{
			left += 1;
			right %= 10000000000;
		}

		printf("%lu%lu", left, right);
		if (count != 98)
			printf(", ");

		fi1_left = fi2_left;
		fi1_right = fi2_right;
		fi2_left = left;
		fi2_right = right;
		count++;
	}
	printf("\n");
	return (0);
}
