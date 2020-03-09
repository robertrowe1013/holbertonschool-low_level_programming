#include "dog.h"
/**
  * init_dog - adopt don't shop
  * @d: doggo
  * @name: Here boy!
  * @age: New tricks?
  * @owner: giver of treats and scritchens
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
