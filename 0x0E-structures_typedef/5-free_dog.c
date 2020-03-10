#include "dog.h"
#include <stdlib.h>
/**
  * free_dog - Who let the dogs out?
  * @d: Baha Mem
  */
void free_dog(dog_t *d)
{
	free(name);
	free(owner);
	free(d);
}
