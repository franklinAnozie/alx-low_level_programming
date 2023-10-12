#ifndef _DOG_H_
#define _DOG_H_

/**
*** struct dog - a structure to define a dog ************
*** @name: name of the dog structure ********************
*** @owner: owner of the dog ****************************
*** @age: age of the dog ********************************
**/

typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
