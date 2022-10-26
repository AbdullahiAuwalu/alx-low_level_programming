#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string s
 * Return: length of string
 */
int _strlen(char *s)
{
	char *p = s;

	while (*s)
		s++;
	return (s - p);
}

/**
 * rev_string - reverses a string
 * @s: string s
 */
void rev_string(char *s)
{
	int i = 0;
	int size = _strlen(s);
	char temp;

	while (i < size)
	{
		temp = *(s + i);
		*(s + i) = *(s + size - 1);
		*(s + size - 1) = temp;
		i++;
		size--;
	}
}

