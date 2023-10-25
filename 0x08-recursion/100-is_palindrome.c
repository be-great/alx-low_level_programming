#include "main.h"

/**
 * checker- function that check characters
 * @s: the string
 * @start: index
 * @end  : end of index
 * Return: 1 if palindrome else 0
 */
int checker(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (checker(s, start + 1, end - 1));
}
/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: the string
 * Return: string len number
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		int count = _strlen_recursion(s + 1);

		return ((1) + count);
	}
	return (0);
}
/**
 * is_palindrome - function that returns 1
 * if a string is a palindrome and 0 if not.
 * str != rts (notpalindorm) , yuy == yuy (palindorm)
 * @s: teh string to check
 * Return: 1 if palindrom else 0
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (checker(s, 0, len - 1));

}
