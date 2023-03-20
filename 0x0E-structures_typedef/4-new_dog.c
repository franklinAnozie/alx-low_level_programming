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
	int name_length, owner_length, i;

	for (name_length = 0; name[name_length] != '\0';)
		name_length++;

	for (owner_length = 0; name[owner_length] != '\0';)
		owner_length++;

	another_dog = malloc(sizeof(dog_t));

	if (!another_dog)
		return (NULL);

	another_dog->owner = malloc(sizeof(another_dog->owner));

	if (!another_dog->owner)
		return (NULL);

	for (i = 0; i < owner_length; i++)
		another_dog->owner[i] = owner[i];

	another_dog->name = malloc(sizeof(another_dog->name));

	if (!another_dog->owner)
		return (NULL);

	for (i = 0; i < name_length; i++)
		another_dog->name[i] = name[i];

	another_dog->age = age;

	return (another_dog);
}
