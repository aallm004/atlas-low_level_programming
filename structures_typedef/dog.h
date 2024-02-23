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

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

#endif
