#include "dog.h"
#include <stdlib.h>

/**
*** free_dog - frees the memory allocated to *****
*** the new dog created in the new_dog func ******
*** @d: predefined dog_t struct called d *********
*** Return: No return ****************************
**/

void free_dog(dog_t *d)
{
	if (!d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
