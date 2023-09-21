#include "main.h"

/**
 * checksap - check if letter is saperater
 * @c: char to check
 * Return: 1 if true else 0
 */
int checksap(char c)
{

	char sap[] = " \t\n;.,!?\"(){}";
	int i = 0;

	while (i < 15)
	{
		if (c == sap[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}
/**
 * islowerc - check if letter is small
 * @c: char to check
 * Return: 1 if true else 0
 */
int islowerc(char c)
{
	if (c >= 97 && c <=  122)
		return (1);
	return (0);
}
/**
 * *cap_string - captialize the first letter of word
 * after a saperater
 * @str: string to capialize
 * Return: string after modify
 */
char *cap_string(char *str)
{

	int prevoiusvalue = 0;

	while (*str)
	{
		if (checksap(*str))
			prevoiusvalue = 1;
		else if (islowerc(*str) && prevoiusvalue)
		{
			*str -= 32;
			prevoiusvalue = 0;
		}
		else
			prevoiusvalue = 0;

		str++;
	}
	return (str);

}
