#ifndef DOG_H
#define DOG_H

int _putchar(char c);
/**
  * struct dog - it's a doggo!
  * @name: Who's a good boy?
  * @age: always pupper
  * @owner: best friend
  */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
