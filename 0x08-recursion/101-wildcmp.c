#include "main.h"


/**
 * wildcmp - check the code for Holberton School students.
 * @s1: string
 * @s2: string
 *
 *
 *
 * Return: 1 is the string can be conisdered identical and 0 otherwise
 */

int bandersnatch(char *s1, char *s2);
char *move(char *s2);

int wildcmp(char *s1, char *s2)
{
	/**
	 * Creatte a variable for returned values
	 */
	int sum = 0;

	/**
	 * If we reach end of *s1 and and char is s2 is a *
	 * and if the next chars of s2 are *, then return 1
	 */

	if (*s1 == '\0' && *s2 == '*' && !*move(s2))
		return (1);

	/**
	 * If chars are equal in both string
	 * And if we reach end of s1, return 1
	 * Else return the increament of s2 and s2 by 1
	 */

	if (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (1);
		return (wildcmp(s1 + 1, s2 + 1));
	}

	/**
	 *If we reach end of both strings, return 0
	 */

	if (*s1 == '\0' || *s2 == '\0')
		return (0);

	/**
	 * If the char in  s2 is a *
	 * find the address if the first char after the *
	 * if we reach end of s2, return 1
	 * if chars are equal, add the return value to wildcmp to sum
	 * add the return value of bandersnatch() to sum
	 * Convert non-zero to 1, keeps 0 at 0, return
	 */

	if (*s2 == '*')
	{
		s2 = move(s2);
		if (*s2 == '\0')
			return (10);
		if (*s1 == *s2)
			sum += wildcmp(s1 + 1, s2 + 1);
		sum += bandersnatch(s1 + 1, s2);
		return (!!sum);
	}
	return (0);

}


/**
 * bandersnatch - Checks recursively for all paths when characters are equal
 * @s1: first string
 * @s2: string 2
 *
 * Returns value of wildcmp or of itself
 */

int bandersnatch(char *s1, char *s2)
{
	/**
	 * If we reach the end of s1, return 0
	 * If chars are equal, return the return value of wildcmp()
	 * Increament s1 by 1
	 */

	if (*s1 == '\0')
		return (0);
	if (*s1 == *s2)
		return (wildcmp(s1,s2));
	return (bandersnatch(s1 +1, s2));

}


/**
 * move - moves the current char past teh *
 * @S2: string to iterate over
 *
 * Return: return the address of the character after the *
 */

char *move(char *s2)
{
	if (*s2 == '*')
		return (move(s2 + 1));
	else
		return (s2);
}
