#include "main.h"
/**
 **infinite_add - add number in string with size
 *@n1: number one
 *@n2: number two
 *@r: the buffer
 *@size_r: size of the buffer
 *Return: the buffer with the addition
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry, i, j, k, len1, len2, bigger;

	len1 = 0, len2 = 0, carry = 0;
	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;
	if (len1 > len2)
		bigger = len1;
	else
		bigger = len2;
	if (bigger + 1  >= size_r)
		return (0);
	i = len1 - 1, j = len2 - 1, k = 0;
	while (i >= 0 || j >= 0 || carry > 0)
	{
		int digit1 = (i >= 0) ? n1[i] - '0' : 0;
		int digit2 = (j >= 0) ? n2[j] - '0' : 0;
		int sum = digit1 + digit2 + carry;

		carry = sum / 10;
		int resultDigit = sum % 10;

		r[k] = resultDigit + '0';
		k++;
		i--;
		j--;
	}
	r[k] = '\0';
	int left = 0, right = k - 1, temp;

	while (left < right)
	{
		temp = r[left];
		r[left] = r[right];
		r[right] = temp;
		left++;
		right--;
	}
	return (r);
}
