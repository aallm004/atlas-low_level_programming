#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - information about dog
 *
 * @name: char name of dog
 * @age: float age of dog
 * @owner: char name of owners
 *
 * Description: Defining a new type
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
