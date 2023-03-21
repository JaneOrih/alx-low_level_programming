#ifndef DOG_H
#define DOG_H

/**
 * struct dog - carries data about dogs and their owners
 * @name: name of dog
 * @age: how old
 * @owner: name of care giver
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - typedef for dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
