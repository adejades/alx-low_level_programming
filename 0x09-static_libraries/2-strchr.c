#include "main.h"
/**
* _strchr - locates a character in a string
* @s: string
* @c: character to search
* Return: pointer to the first occurance of the character c in the string s
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
