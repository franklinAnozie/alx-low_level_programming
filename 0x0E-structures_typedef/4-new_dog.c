#include "dog.h"
#include <stdlib.h>

/**
*** new_dog - create a new dog from the **********
*** the predefined struct called dog_t ***********
*** @name: name of the new dog created ***********
*** @age: age of the new dog created *************
*** @owner: owner of the new dog created *********
*** Return: A new dog ****************************
**/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *another_dog;

	another_dog = malloc(sizeof(dog_t));

	if (!another_dog)
	{
		return (NULL);
	}

	another_dog->name = name;
	another_dog->age = age;
	another_dog->owner = owner;

	return (another_dog);
}
