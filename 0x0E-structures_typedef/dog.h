#ifndef DOG_H
#define DOG_H
#include <stdio.h>

typedef struct dog_t;

/**
 * struct dog - structured data type to save info about pets.
 * @name: name of the pet.
 * @age: age of the pet.
 * @owner: pet's guardian.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

int _putchar(char c);

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif /* DOG_H */
