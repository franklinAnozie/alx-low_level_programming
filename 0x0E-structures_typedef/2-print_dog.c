#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
*** print_dog - prints a new dog from the ********
*** the predefined struct called dog_t ***********
*** @d: predefined struct dog ********************
*** Return: No return ****************************
**/

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("(nil)\n");
	}
	else
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		};
		if (!d->age)
		{
			printf("Age: (nil)\n");
		}
		else
		{
			printf("Age: %f\n", d->age);
		};
		if (!d->owner)
		{
			printf("Owner: (nil)\n");
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		};
	};
}
