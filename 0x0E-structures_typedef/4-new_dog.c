#include "dog.h"
#include <stdlib.h>
/**
  * new_dog - adopt don't shop
  * @name: Here boy!
  * @age: if old, no new tricks
  * @owner: giver of treats and scritchens
  *
  * Return: new dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (dog == NULL || dog->name == NULL || dog->owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = _strdup(name);
	dog->age = age;
	dog->owner = _strdup(owner);
	if (dog->owner == NULL)
	{
		free(name);
		free(dog);
	}

	return (dog);
}
/**
 * _strdup - duplicate string
 * @str: string
 *
 * Return: \0 if string null, null if not enough mem, else pointer
 */
char *_strdup(char *str)
{
	int sl = 0;
	char *dup;
	int i;

	if (str == NULL)
		return (NULL);
	while (str[sl] != '\0')
		sl++;
	dup = malloc(sizeof(char) * (sl + 1));
	if (dup == NULL)
	{
		free(dup);
		return (NULL);
	}
	for (i = 0; str[i] != 0; i++)
		dup[i] = str[i];
	dup[i] = '\0';

	return (dup);
}
