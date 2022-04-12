#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - Returns the lenght pf a string
 * @s: String to be evaluated
 *
 * Return: lenght of the given string @s
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);

}


/**
 * _strcpy - Copies the string pointed by @src
 * Including the terminating null byte to @dest
 * @src: Pointer to the source
 * @dest: Buffer the destination
 *
 * Return: pointer to dest (destination)
 */

char *_strcpy(char *src, char *dest)
{
	int len = 0, i;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}



/**
 * new_dog - Creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the new dog
 *
 * Return: on SUCCESS, pointer to the new dog and NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	_strcpy(name, dog->name);
	_strcpy(owner, dog->owner);
	dog->age = age;

	return (dog);
}
