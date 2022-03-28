#include "main.h"
#include <string.h>

/**
* _strchr - Return a pointer to the first occurence of the character @c
* @c: the character in question
* @s: the string pointer
*
* Return: Pointer to c
*/


char *_strchr(char *s, char c)
{
	if (c > 255)
	{
		return (NULL);
	}
	int s_len;
	int i;

	if (s == NULL)
	{
		return (NULL);
	}
	s_len = strlen(s);
	for (i = 0; i < s_len; i++)
	{
		if ((char) c == s[i])
		{
			return (&s[i]);
		}
	}
	return (NULL);

}
