#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string containing characters
 * @c: character to be located in string
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	while (*s >= '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
