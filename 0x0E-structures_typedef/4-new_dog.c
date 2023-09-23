#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - a function that return the length of a string
 * @s: the string to be checked
 * Return: length of the string
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
/**
 * _strcpy - a function that copies strings pointed to by src
 * @dest: pointer to where we copy the string from
 * @src: string to be copied
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i, len = 0;

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
 * new_dog - a function that creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner:dog's owner
 * Return: NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	int len, len1;

	len = _strlen(name);
	len1 = _strlen(owner);
	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
	{
		return (NULL);
	}
	newDog->name = malloc(sizeof(char) * (len + 1));
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	newDog->owner = malloc(sizeof(char) * (len1 + 1));
	if (newDog->owner == NULL)
	{
		free(newDog);
		free(newDog->name);
		return (NULL);
	}
	_strcpy(newDog->name, name);
	_strcpy(newDog->owner, owner);
	newDog->age = age;
	return (newDog);
}
