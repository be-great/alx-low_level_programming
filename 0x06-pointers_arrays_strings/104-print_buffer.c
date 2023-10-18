#include "main.h"

void printThestring(int i, char *b, int size);
void printmemorybytes(int i);
void printHexvalueofstring(int i, char *b, int size);
/**
 * print_buffer - function that prints buffer
 * @b: the buffer
 * @size: size of the buffer
 */
void print_buffer(char *b, int size)
{
	int i = 0;

	if (size <= 0)
	{
		printf("\n");
	}
	else
	{
		for (i = 0; i <= size; i += 10)
		{
			printmemorybytes(i);
			printHexvalueofstring(i, b, size);
			printThestring(i, b, size);
			printf("\n");
		}
	}

}
/**
 * printmemorybytes - print the first part
 * Discription: Each line starts with the position of the first
 * byte of the line in hexadecimal (8 chars), starting with 0
 * @i: the index
 */
void printmemorybytes(int i)
{
	printf("%08x: ", i);
}
/**
 * printHexvalueofstring - print the hex value of the character int the string
 * Discription: Each line shows the hexadecimal content (2 chars)
 * of the buffer, 2 bytes at a time, separated by a space
 * @i: the index
 * @b: the string
 * @size: the string size
 */
void printHexvalueofstring(int i, char *b, int size)
{
	int j;

	for (j = i; j < (i + 10); j++)
	{
		if (j >= size)
		{
			printf("  ");
			if ((j % 2) != 0)
				printf(" ");
		}
		else
		{
			printf("%02x", b[j]);
			if ((j % 2) != 0)
				printf(" ");
		}
	}

}
/**
 * printThestring - print the char of the string
 * Discription: Each line shows the content of the buffer.
 * If the byte is a printable character, print the letter
 * if not, print .
 * @i: the index
 * @b: the string
 * @size: the string size
 */
void printThestring(int i, char *b, int size)
{
	int j;

	for (j = i; j < (i + 10) && j < size; j++)
	{
		if (b[j] >= 32 && b[j] <= 126)
			printf("%c", b[j]);
		else
			printf(".");
	}

}
