#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: string
 * @c: Character to search
 * Return: Pointer to the first occurace of the character c in the string s
 **/

char *_strchr(char *s, char c)
{
	while (*s != '\0') /*Declarig WHILE*/
	{
		if (*s == c) /*if s == c*/
		{
			return (s); /*return s*/
		}
		++s;
	}

	if (*s == c)
	{
		return (s);
	}

	return (0);/* values null*/
}
